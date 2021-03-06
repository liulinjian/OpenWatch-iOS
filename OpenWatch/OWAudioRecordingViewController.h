//
//  OWAudioRecordingViewController.h
//  OpenWatch
//
//  Created by Christopher Ballinger on 5/7/13.
//  Copyright (c) 2013 OpenWatch FPC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AEAudioController.h"
#import "AERecorder.h"
#import "OWAudio.h"
#import "OWRecordingActivityIndicatorView.h"
#import "OWTimerView.h"
#import "BButton.h"
#import "AEAudioController.h"

@class OWAudioRecordingViewController;

@protocol OWAudioRecordingDelegate <NSObject>
@optional
- (void) recordingViewController:(OWAudioRecordingViewController*)recordingViewController didFinishRecording:(OWAudio*)audio;
- (void) recordingViewControllerDidCancel:(OWAudioRecordingViewController*)recordingViewController;
@end

@interface OWAudioRecordingViewController : UIViewController

@property (nonatomic) BOOL isRecording;

@property (nonatomic, weak) id<OWAudioRecordingDelegate> delegate;
@property (nonatomic, strong) UIBarButtonItem *cancelButton;

@property (nonatomic, strong) AEAudioController *audioController;
@property (nonatomic, strong) AERecorder *recorder;
@property (nonatomic, strong) OWAudio *audio;

@property (nonatomic, strong) UIImageView *microphoneImageView;
@property (nonatomic, strong) OWRecordingActivityIndicatorView *recordingIndicatorView;
@property (nonatomic, strong) OWTimerView *timerView;

@property (nonatomic, strong) BButton *recordButton;

@end

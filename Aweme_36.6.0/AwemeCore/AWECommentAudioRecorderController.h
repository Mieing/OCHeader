@class NSString, AWECommentAudioRecorder, NSMutableArray, UIView;
@protocol AWECommentAudioInputViewProtocol, AWECommentAudioRecorderControllerDelegate;

@interface AWECommentAudioRecorderController : NSObject <AWECommentAudioInputViewDelegate, AWECommentAudioRecorderDelegate, AWECommentAudioRecorderControllerProtocol>

@property (nonatomic) unsigned long long effectTouchSessionID;
@property (nonatomic) unsigned long long currentTouchSessionID;
@property (retain, nonatomic) NSMutableArray *restoreWindowGR;
@property (nonatomic) BOOL didPausedPreviousPlayer;
@property (weak, nonatomic) UIView<AWECommentAudioInputViewProtocol> *audioInputView;
@property (weak, nonatomic) id<AWECommentAudioRecorderControllerDelegate> delegate;
@property (retain, nonatomic) AWECommentAudioRecorder *recorder;
@property (copy, nonatomic) NSString *audioFilePath;
@property (copy, nonatomic) id /* block */ willPausePreviousPlayer;
@property (copy, nonatomic) id /* block */ willResumePreviousPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioInputTouchViewTouchDownInside:(id)a0;
- (void)audioInputTouchViewTouchMoveOutside:(id)a0;
- (void)audioInputTouchViewTouchMoveInside:(id)a0;
- (void)audioInputTouchViewTouchUpInside:(id)a0 cancelled:(BOOL)a1;
- (void)audioInputTouchViewTouchUpOutside:(id)a0 cancelled:(BOOL)a1;
- (void)audioRecorderStartRecord:(id)a0 error:(id)a1;
- (void)audioRecorderDidFinishRecording:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)audioRecorderExceedLimitTime:(id)a0;
- (void)audioRecorderNotifyLeftSecondBeforeExceedLimit:(id)a0 secondsLeftBeforeExceedLimit:(long long)a1;
- (void)configWindowGesture;
- (void)restoreWindowGesture;
- (void)p_updateFinalChannelVolume;
- (float)p_normalizedSoundPower;
- (id)p_generateAudioBubbleArrayWithPowers:(id)a0 totalTime:(double)a1;
- (void)p_observeRecorder;
- (void)p_unobserveRecorder;
- (BOOL)sendRecordMessageOrNot;
- (id)p_generateAudioBubbleStringWithPowers:(id)a0 totalTime:(double)a1;
- (void)touchViewTouchDown;
- (void)p_updateAudioCountDown:(long long)a0;
- (void)audioInputTouchViewTouchUp:(BOOL)a0;
- (void)touchViewTouchUp;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)p_updateVolume;

@end

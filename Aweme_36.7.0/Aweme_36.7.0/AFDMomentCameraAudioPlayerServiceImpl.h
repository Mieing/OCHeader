@class NSString, UIView;
@protocol AFDBubbleAudioPlayerControllerProtocol;

@interface AFDMomentCameraAudioPlayerServiceImpl : NSObject <AFDMomentCameraAudioPlayerService>

@property (retain, nonatomic) id<AFDBubbleAudioPlayerControllerProtocol> playerController;
@property (copy, nonatomic) NSString *audioFilePath;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *wave;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAudio;
- (void)pauseAudio;
- (void)continueAudio;
- (BOOL)isPlayerPlaying;
- (void)configPlayer;
- (void).cxx_destruct;
- (void)playAudio;

@end

@class IESECUIImageView;

@interface IESECDeepFeedVideoMuteTagView : UIView

@property (retain, nonatomic) IESECUIImageView *muteView;
@property (retain, nonatomic) IESECUIImageView *audioView;
@property (nonatomic) BOOL mixWithBackgroundMusic;
@property (nonatomic) BOOL hasCancelAwemeGlobalMute;

- (void)setAudioSessionWithCategory:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)resetAudioSession;
- (void)setMute:(BOOL)a0;
- (void)setupUI;

@end

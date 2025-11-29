@class AVPlayer, UIImageView, UIView, UILabel, UIButton;
@protocol ACCMusicModelProtocol;

@interface ACCASSCurrentSelectedView : UIView

@property (retain, nonatomic) UIView *coverBgView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *clipButton;
@property (retain, nonatomic) UIView *sepLineView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) id<ACCMusicModelProtocol> selectedMusic;
@property (retain, nonatomic) AVPlayer *internalPlayer;
@property (nonatomic) BOOL pausedByBackground;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ didClickClipButton;
@property (copy, nonatomic) id /* block */ didClickDeleteButton;
@property (copy, nonatomic) id /* block */ didStartPlayMusic;
@property (nonatomic) struct _HTSAudioRange { double location; double length; } audioRange;

- (id)initWithMusic:(id)a0;
- (void)p_replayFromRangeLocation;
- (void)p_didClickPlayButton:(id)a0;
- (void)p_didClickClipButton:(id)a0;
- (void)p_didClickDeleteButton:(id)a0;
- (void)updateCancelButtonToDistouchableColor;
- (void)hideClipActionBtn;
- (void)p_setupUI;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;

@end

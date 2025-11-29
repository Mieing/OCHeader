@class NSString, UIImageView, AWEMusicCoverButton, AWEAwemeModel, UILabel, UIViewController;

@interface AWEPlayInteractionMusicView : UIView <AWEPlayInteractionMusicViewProtocol>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEMusicCoverButton *musicButton;
@property (retain, nonatomic) UIImageView *listenIconView;
@property (retain, nonatomic) UILabel *listenTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_applySafeScaling;
- (void)layoutSubviews;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)makeConstraints;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (double)iconSize;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end

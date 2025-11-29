@class AWEMusicCoverButton, NSString, UIImageView, AWEAwemeModel, UILabel, UIView, UIViewController;

@interface AWEPlayInteractionStyleOneMusicView : UIView <AWEPlayInteractionMusicViewProtocol>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UILabel *playInteractionLabel;
@property (retain, nonatomic) UIView *playInteractionCircleMaskView;
@property (retain, nonatomic) UIImageView *playInteractionMaskView;
@property (retain, nonatomic) AWEMusicCoverButton *musicButton;
@property (retain, nonatomic) UIImageView *listenIconView;
@property (retain, nonatomic) UILabel *listenTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)makeConstraints;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)updatePlayInteractionTitle:(id)a0;
- (void)updatePlayInteractionLayout:(double)a0;
- (double)iconSize;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)layoutSubviews;

@end

@class AWEIMUser, UIImageView, LOTAnimationView, UILabel;
@protocol AWEIMLivingContainerViewProtocol;

@interface AWEIMLivingContainerView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) LOTAnimationView *avartarLiveTagMusicView;
@property (retain, nonatomic) AWEIMUser *user;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) id<AWEIMLivingContainerViewProtocol> delegate;

- (void)addGesture;
- (void)p_setupUIWithStyle:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 user:(id)a1 style:(unsigned long long)a2;
- (void)startWithUser:(id)a0 ignoreAnimation:(BOOL)a1;
- (void)didTapAvatarImage;
- (void)loadAvatarImageIgnoreAnimation:(BOOL)a0;
- (void)p_setupLivingStyleUI;
- (void)p_setupLivingWithoutAvatarStyleUI;
- (void)addMaskLayer;
- (void).cxx_destruct;

@end

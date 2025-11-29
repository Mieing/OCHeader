@class UIImageView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveMultiLinkerMediaCustomItemView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (nonatomic) unsigned long long currentStatus;
@property (retain, nonatomic) UILabel *bottomTitleLbl;

- (void)didSetAttachingDIContext;
- (void)renderStatus:(unsigned long long)a0;
- (void)p_animateWithResourceName:(id)a0;
- (void).cxx_destruct;
- (void)loadViews;

@end

@class UIImageView, UIVisualEffectView, UILabel, UIView;

@interface AWESearchPaymentVideoMaskV2View : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *longVideoBlurView;

- (void)addEffectiveView;
- (void)removeEffectView;
- (void)addLongVideoEffectiveView;
- (void)removeLongVideoEffectView;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

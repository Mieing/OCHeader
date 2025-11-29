@class UIImageView, UIVisualEffectView, UILabel, UIView;

@interface AWESearchRewarAdvertiseVideoMaskV2View : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;

- (void)addEffectiveView;
- (void)removeEffectView;
- (void)updateTipLabelText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

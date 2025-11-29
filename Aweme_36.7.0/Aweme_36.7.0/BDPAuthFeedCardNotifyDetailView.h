@class NSString, UILabel, UIView, UIButton;

@interface BDPAuthFeedCardNotifyDetailView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *feedImageView;
@property (copy, nonatomic) NSString *lottieFileString;
@property (retain, nonatomic) UILabel *descLabel;
@property (copy, nonatomic) id /* block */ backblock;

- (void)backBtnDidClick;
- (void).cxx_destruct;
- (void)buildView;

@end

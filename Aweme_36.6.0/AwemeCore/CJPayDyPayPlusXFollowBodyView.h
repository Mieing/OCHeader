@class UIImageView, UILabel, CJPayDyPayPlusXViewModel;

@interface CJPayDyPayPlusXFollowBodyView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *markImageView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) CJPayDyPayPlusXViewModel *viewModel;
@property (nonatomic) BOOL isQuality;

- (id)initWithIsQuality:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithViewModel:(id)a0;

@end

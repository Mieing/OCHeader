@class CJPayTouchLabel, UIImageView, UILabel, CJPayDyPayPlusXViewModel;

@interface CJPayDyPayPlusXFreeLoginBodyView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) CJPayTouchLabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayDyPayPlusXViewModel *viewModel;
@property (nonatomic) BOOL isQuality;

- (id)initWithIsQuality:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithViewModel:(id)a0;

@end

@class UILabel;

@interface CJPayCombinePayDetailView : UIView

@property (retain, nonatomic) UILabel *firstAssetDescLabel;
@property (retain, nonatomic) UILabel *firstAssetAmountLabel;
@property (retain, nonatomic) UILabel *secondAssetDescLabel;
@property (retain, nonatomic) UILabel *secondAssetAmountLabel;

- (void)upateDetailViewLayout;
- (void)updateFirstAssetMsgWithCombinePayFund:(id)a0;
- (void)updateSecondAssetMsgWithCombinePayFund:(id)a0;
- (void)updateFirstAssetMsgWithAssetPayFund:(id)a0;
- (void)updateSecondAssetMsgWithAssetPayFund:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

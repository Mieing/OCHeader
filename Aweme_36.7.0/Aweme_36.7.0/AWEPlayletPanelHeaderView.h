@class UIImageView, AWEPaymentBadgeView, UILabel, AWEPlayletInfoModel, DUXBaseStackView;

@interface AWEPlayletPanelHeaderView : UIView

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) AWEPlayletInfoModel *playletVideoModel;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) DUXBaseStackView *tagStackView;

- (BOOL)shouldShowPaymentTagView:(id)a0;
- (BOOL)shouldShowExpectedCompletionTime:(id)a0;
- (id)completionTimeText:(id)a0;
- (id)getDataYear:(id)a0;
- (void)updatePlayletInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

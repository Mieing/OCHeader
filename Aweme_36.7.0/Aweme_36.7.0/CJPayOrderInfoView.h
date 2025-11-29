@class UILabel, UIImageView;

@interface CJPayOrderInfoView : UIView

@property (retain, nonatomic) UILabel *orderInfoLabel;
@property (retain, nonatomic) UIImageView *tickCircleView;

- (void)updateWithText:(id)a0 iconURL:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end

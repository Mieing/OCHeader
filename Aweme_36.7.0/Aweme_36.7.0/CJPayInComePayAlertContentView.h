@class UILabel, NSString, CJPaySubPayTypeIconTipModel;

@interface CJPayInComePayAlertContentView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) CJPaySubPayTypeIconTipModel *iconTips;

- (id)initWithIconTips:(id)a0;
- (id)contentLabelWithText:(id)a0 lineHeight:(double)a1;
- (void)p_setupUI;
- (id)titleLabelWithText:(id)a0;
- (void).cxx_destruct;

@end

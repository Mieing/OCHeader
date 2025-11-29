@class UILabel, YYLabel;

@interface IESGCPDUXAlertBodyView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (nonatomic) double contentPreferredMaxLayoutWidth;

- (void)setupWithTitleLabel:(id)a0 contentLabel:(id)a1;
- (void)setAttributedDescription:(id)a0;
- (void).cxx_destruct;

@end

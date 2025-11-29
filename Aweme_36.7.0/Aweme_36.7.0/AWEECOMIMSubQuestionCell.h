@class YYLabel, UIImageView, BDPCDDynamicCardDashedLineView;

@interface AWEECOMIMSubQuestionCell : UITableViewCell

@property (retain, nonatomic) YYLabel *quesitonLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) BDPCDDynamicCardDashedLineView *dashedLineView;

- (void)bindQuestionText:(id)a0 isLastRow:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end

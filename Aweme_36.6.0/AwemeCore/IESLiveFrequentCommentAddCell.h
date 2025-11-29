@class UIImageView, CAShapeLayer, UILabel, UIView;

@interface IESLiveFrequentCommentAddCell : UITableViewCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) CAShapeLayer *lineborder;

- (void)addLineBorderWithTableViewWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end

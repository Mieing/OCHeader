@class UIImageView, UILabel, UIView;

@interface AWESearchAIGCInputAgentVideoRSCell : AWESearchAIGCInputAgentBaseCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *rightSepView;

+ (id)nameLabelFont;
+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

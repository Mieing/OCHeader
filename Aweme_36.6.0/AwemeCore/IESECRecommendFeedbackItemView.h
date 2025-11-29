@class UIView, UILabel, IESECRecommendFeedbackItemModel, IESECUIImageView;

@interface IESECRecommendFeedbackItemView : UIView

@property (readonly, nonatomic) IESECRecommendFeedbackItemModel *model;
@property (nonatomic) BOOL shouldShowBottomLine;
@property (readonly, nonatomic) IESECUIImageView *iconView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIView *bottomLineView;
@property (readonly, nonatomic) IESECUIImageView *arrowView;

+ (id)titleFont;

- (void)setModel:(id)a0 isFirstPage:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

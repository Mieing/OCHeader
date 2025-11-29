@class UIColor, UILabel, UIView, MMWebImageView;

@interface GameChatBaseGroupCell : GCBaseCollectionViewCell

@property (retain, nonatomic) MMWebImageView *webImageView;
@property (retain, nonatomic) UILabel *groupNameLabel;
@property (retain, nonatomic) UILabel *gcMidDescLabel;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *bgCornerView;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UIColor *gcNormalTextColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportStickTop;
- (id)verticalAlignArrary;
- (double)labelLeft;
- (double)maxRight;
- (double)verticalAlignCenterY;
- (void)configureWithCellModel:(id)a0;
- (id)attributeDescForModel:(id)a0;
- (void).cxx_destruct;

@end

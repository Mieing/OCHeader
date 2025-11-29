@class UIView, NSString, NSArray, UIImageView, UIButton, AWEGradientView, AWELifeCardHotView, UILabel;

@interface AWEFeedConcernPOIMultiGoodsContentView : UIView

@property (retain, nonatomic) UIImageView *cardBackgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *viewOtherView;
@property (retain, nonatomic) UILabel *viewOtherLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UIImageView *goodsCardImageView;
@property (retain, nonatomic) UIImageView *maskBackgroundView;
@property (retain, nonatomic) AWEGradientView *groundGlassView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UIButton *gotoButton;
@property (retain, nonatomic) AWELifeCardHotView *cardHotView;
@property (copy, nonatomic) id /* block */ loadImageBlock;
@property (copy, nonatomic) id /* block */ merchantDetailBlock;
@property (copy, nonatomic) id /* block */ poiGroupBlock;
@property (copy, nonatomic) NSString *poiGroupSchema;
@property (copy, nonatomic) NSArray *saleMutiCellViews;
@property (copy, nonatomic) id /* block */ hotEventCallback;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)__buildUI;
- (void)gotoPOIGoodsDetail:(id /* block */)a0;
- (void)gotoPOIGrouponPage:(id /* block */)a0;
- (void)addHotEventBlock:(id /* block */)a0;
- (void)reportHotPoint:(struct CGPoint { double x0; double x1; })a0 componetName:(id)a1;
- (id)hotPageName;
- (void)__addAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

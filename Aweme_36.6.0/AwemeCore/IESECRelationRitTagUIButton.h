@class NSMutableArray, UIView;

@interface IESECRelationRitTagUIButton : UIView

@property (retain, nonatomic) UIView *background;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) NSMutableArray *componentsArr;
@property (retain, nonatomic) NSMutableArray *componentsRadiusArr;

- (void)updateBackgroundWithConfig:(id)a0;
- (void)updateUIWithItems:(id)a0;
- (void)generateTextComponentWithTextConfig:(id)a0;
- (void)generateImageComponentWithImageModel:(id)a0;
- (void)generateSplitorComponentWithSplitorConfig:(id)a0;
- (double)calculateLeftRightPaddingWithFontSize:(double)a0;
- (void)updateWithRitTagUIModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setUpViews;

@end

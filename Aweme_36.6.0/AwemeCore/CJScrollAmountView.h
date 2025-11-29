@class NSArray, UILabel, CJScrollAmountStyleModel, NSNumber;

@interface CJScrollAmountView : UIView

@property (retain, nonatomic) NSArray *targetSingleAmountViews;
@property (retain, nonatomic) UILabel *amountUnitLabel;
@property (retain, nonatomic) UILabel *amountDefaultLabel;
@property (retain, nonatomic) UILabel *dotLabel;
@property (nonatomic) double showViewsWidth;
@property (retain, nonatomic) CJScrollAmountStyleModel *styleModel;
@property (retain, nonatomic) NSNumber *startNumber;

- (void)animateScrollTo:(id)a0;
- (void)updateWithoutAnimate:(id)a0;
- (double)getAmountCellHeight;
- (struct CGSize { double x0; double x1; })getUnitCellSize;
- (void)setupContentWithMaxColumn:(unsigned char)a0;
- (double)getUnitFontSize;
- (void)updateSingleAmountScrollViewSize:(id)a0 defaultIndex:(int)a1;
- (double)getAmountCellWidth;
- (double)getAmountFontSize;
- (id)p_buildAndLayoutSingleScrollView:(double)a0;
- (id)getCharArrayFrom:(id)a0;
- (void)resetContentWithMaxColumn:(unsigned char)a0;
- (void)updateContentWithNumber:(id)a0;
- (void)p_updateAmount:(id)a0 withAnimated:(BOOL)a1;
- (void)p_setTargetSingleAmountViewsHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)updateWithStyle:(id)a0;

@end

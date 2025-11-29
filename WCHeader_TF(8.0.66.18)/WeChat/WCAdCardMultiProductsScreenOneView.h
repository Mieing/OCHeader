@class NSString, MMUILabel;

@interface WCAdCardMultiProductsScreenOneView : WCAdCardMultiProductsBaseView

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUILabel *descView;
@property (nonatomic) struct CGPoint { double x; double y; } titleOriCenter;
@property (nonatomic) struct CGPoint { double x; double y; } descOriCenter;

+ (double)calcHeightWithTitle:(id)a0 desc:(id)a1 maxWidth:(double)a2;
+ (id)getDescFontAgainstTitle:(id)a0;
+ (id)getDescColorAgainstTitle:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 desc:(id)a2;
- (void)generateSubviews;
- (void)resizeSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getObjectsToDisappear;
- (id)getObjectsToAppear;
- (void).cxx_destruct;

@end

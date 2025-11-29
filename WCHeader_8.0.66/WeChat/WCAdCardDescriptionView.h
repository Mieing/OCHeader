@class NSArray, NSMutableArray;

@interface WCAdCardDescriptionView : UIView

@property (retain, nonatomic) NSArray *descriptionItems;
@property (nonatomic) long long buttonStyle;
@property (retain, nonatomic) NSMutableArray *descriptionViews;
@property (nonatomic) BOOL isAnimating;

+ (double)getHeightForItems:(id)a0 maxWidth:(double)a1 buttonStyle:(long long)a2;
+ (BOOL)hasDescriptionIconForItems:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 descriptionItems:(id)a1 buttonStyle:(long long)a2;
- (void)generateItemViews;
- (BOOL)hasDescriptionIcon;
- (void)switchToIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end

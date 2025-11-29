@class UIFont;

@interface GCImageCardLayoutInfo : GCDynamicLayoutProvider

@property (nonatomic) double innerContentWidth;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double titleHeight;
@property (nonatomic) double titleTopOffset;
@property (nonatomic) double contentMarginWidth;
@property (nonatomic) double playBtnSize;

- (id)init;
- (void).cxx_destruct;

@end

@class UIFont;

@interface GCShareLinkLayoutInfo : GCDynamicLayoutProvider

@property (nonatomic) double imageSize;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *descFont;
@property (nonatomic) double titleHeight;
@property (nonatomic) double descHeight;
@property (nonatomic) double titleLeftMargin;
@property (nonatomic) double titleRightMargin;
@property (nonatomic) double labelSpace;
@property (nonatomic) double labelContentWidth;

- (id)init;
- (void).cxx_destruct;

@end

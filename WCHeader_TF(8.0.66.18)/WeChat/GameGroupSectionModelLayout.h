@interface GameGroupSectionModelLayout : GCDynamicLayoutProvider

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double labelHeight;
@property (nonatomic) double fontSize;
@property (nonatomic) double totalHeight;

- (id)init;

@end

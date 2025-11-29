@interface IESIMContactPickerCellAccessoryComponent : IESIMContactPickerCellComponentBase

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (double)leftOffset;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (id)createView;

@end

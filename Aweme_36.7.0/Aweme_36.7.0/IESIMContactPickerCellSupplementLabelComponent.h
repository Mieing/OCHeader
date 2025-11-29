@interface IESIMContactPickerCellSupplementLabelComponent : IESIMContactPickerCellComponentBase

@property (nonatomic) double supplementLabelHeight;
@property (nonatomic) double supplementLabelWidth;

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (BOOL)canShowComponentView;
- (id)createView;

@end

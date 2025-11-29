@class AWEBinding;

@interface IESIMContactPickerCellDecorationComponent : IESIMContactPickerCellComponentBase

@property (retain, nonatomic) AWEBinding *binding;

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (id)p_createImageView;
- (void).cxx_destruct;
- (id)createView;

@end

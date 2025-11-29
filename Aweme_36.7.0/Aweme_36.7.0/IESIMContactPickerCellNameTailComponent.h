@class AWEBinding;

@interface IESIMContactPickerCellNameTailComponent : IESIMContactPickerCellComponentBase

@property (retain, nonatomic) AWEBinding *groupCountBind;

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (double)leftOffset;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void).cxx_destruct;
- (void)updateText;
- (id)createView;

@end

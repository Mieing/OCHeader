@class AWEBinding;

@interface IESIMContactPickerCellNameComponent : IESIMContactPickerCellComponentBase

@property (retain, nonatomic) AWEBinding *toUserBinding;
@property (retain, nonatomic) AWEBinding *nameBinding;
@property (retain, nonatomic) AWEBinding *groupNameBinding;

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void)didEndDisplay;
- (id)attrForText:(id)a0 highlightInfo:(id)a1 attr:(id)a2;
- (float)contentHuggingPriority;
- (void)p_updateName;
- (void).cxx_destruct;
- (float)compressionResistancePriority;
- (id)createView;

@end

@class IESIMContactPickerContentCellController, UIView;

@interface IESIMContactPickerCellComponentBase : AWEIMComponentBase

@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) IESIMContactPickerContentCellController *controller;

+ (id)componentWithCellController:(id)a0 context:(id)a1;
+ (id)identifier;

- (void)componentDidMounted:(id)a0;
- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (double)leftOffset;
- (id)initWithCellController:(id)a0 context:(id)a1;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void)didEndDisplay;
- (float)contentHuggingPriority;
- (void).cxx_destruct;
- (float)compressionResistancePriority;
- (id)createView;

@end

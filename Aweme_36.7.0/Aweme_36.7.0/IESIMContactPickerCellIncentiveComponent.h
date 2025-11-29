@class NSAttributedString, AWEBinding;

@interface IESIMContactPickerCellIncentiveComponent : IESIMContactPickerCellComponentBase

@property (copy, nonatomic) NSAttributedString *statusAttributedString;
@property (retain, nonatomic) AWEBinding *binding;

+ (id)identifier;

- (void)componentDidMounted:(id)a0;
- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (double)leftOffset;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void)didEndDisplay;
- (BOOL)hitStreakUpdateExp;
- (void).cxx_destruct;
- (id)createView;

@end

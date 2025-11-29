@class NSArray;

@interface AWEMixBarInPlaceTransitionComponentConfig : NSObject

@property (copy, nonatomic) NSArray *originView;
@property (copy, nonatomic) NSArray *targetView;
@property (copy, nonatomic) NSArray *stableRectValue;
@property (copy, nonatomic) NSArray *changeRectValue;
@property (copy, nonatomic) NSArray *originHiddenValue;
@property (copy, nonatomic) NSArray *customStableRect;
@property (copy, nonatomic) NSArray *customChangeRect;

- (void)resetRectValueWithTopView:(id)a0;
- (void)resetHiddenValue;
- (void).cxx_destruct;

@end

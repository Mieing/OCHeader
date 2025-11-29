@interface IESECSliceXInnerTracker : NSObject

+ (void)initialize;
+ (id)shared;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)innerCommonParams;

@end

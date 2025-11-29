@class NSString;

@interface IESLivePublicScreenAnchorLayoutCalculator : IESLivePublicScreenNormalLayoutCalculator

@property (retain, nonatomic) NSString *curHighestScene;

- (id)initWithDIContext:(id)a0;
- (unsigned long long)defaultHeightType;
- (double)calculateMessageListHeightWithConstHeight:(double)a0;
- (double)calculateExpendHeightWithConstHeight:(double)a0;
- (double)getSafeHeight:(double)a0;
- (void).cxx_destruct;

@end

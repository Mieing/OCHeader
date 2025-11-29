@interface IESLivePublicScreenAudienceLayoutCalculator : IESLivePublicScreenNormalLayoutCalculator

@property (nonatomic) double lowHeightIncrement;
@property (nonatomic) double middleHeightIncrement;
@property (nonatomic) double highHeightIncrement;
@property (nonatomic) double heightExploreRiseScale;
@property (nonatomic) BOOL heightRiseGiftEnterHide;
@property (nonatomic) unsigned long long dynamicType;

- (id)layoutInfoDict;
- (id)initWithDIContext:(id)a0 initialHeightType:(unsigned long long)a1;
- (double)calculateMessageListHeightWithConstHeight:(double)a0;

@end

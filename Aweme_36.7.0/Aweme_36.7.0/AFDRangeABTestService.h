@interface AFDRangeABTestService : HTSService <HTSService, AFDRangeABTestProtocol>

- (void)coldLaunchStoreLabelValue;
- (BOOL)afdBoolForRangeValue:(id)a0;
- (id)afdStringForRangeValue:(id)a0;
- (long long)afdIntegerForRangeValue:(id)a0;
- (double)afdDoubleForRangeValue:(id)a0;
- (id)afdDictionaryForRangeValue:(id)a0;
- (id)afdArrayForRangeValue:(id)a0;
- (id)init;

@end

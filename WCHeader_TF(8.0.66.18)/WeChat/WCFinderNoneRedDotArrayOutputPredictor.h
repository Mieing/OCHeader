@interface WCFinderNoneRedDotArrayOutputPredictor : WCFinderArrayOutputUDRPredictor

- (id)getPredictOutputArray;
- (id)getPredictOutputArray:(BOOL)a0 targetRedDot:(id)a1;
- (id)convertWinningCombinationToBusinessArray:(id)a0 currentBusinessArray:(id)a1 maxCount:(long long)a2;

@end

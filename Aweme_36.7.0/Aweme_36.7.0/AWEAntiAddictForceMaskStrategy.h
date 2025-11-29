@class NSString;
@protocol AWEAntiAddictStrategyThresholdUnitProtocol;

@interface AWEAntiAddictForceMaskStrategy : NSObject <AWEAntiAddictStrategy>

@property long long satisfiedStrategyIndex;
@property (retain) id<AWEAntiAddictStrategyThresholdUnitProtocol> satisfiedStrategy;
@property (readonly, copy, nonatomic) NSString *strategyName;
@property (readonly, nonatomic) long long triggerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

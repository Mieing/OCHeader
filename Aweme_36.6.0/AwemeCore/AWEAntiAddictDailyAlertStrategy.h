@class NSString;

@interface AWEAntiAddictDailyAlertStrategy : NSObject <AWEAntiAddictStrategy>

@property (nonatomic) BOOL isDay;
@property (readonly, copy, nonatomic) NSString *strategyName;
@property (readonly, nonatomic) long long triggerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)satisfiedWithPreparedData:(id)a0;
- (id)getActionWithPreparedData:(id)a0;

@end

@class NSString;

@interface AWEElementGlobalOfflineFilterStrategy : NSObject <AWEElementFilterStrategyProtocol>

@property (readonly, nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementHideStrategiesMap;
+ (BOOL)activateWithContext:(id)a0;

- (id)filterElements:(id)a0 context:(id)a1 buildContext:(id)a2;

@end

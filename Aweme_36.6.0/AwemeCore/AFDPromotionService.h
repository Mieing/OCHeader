@class NSString;

@interface AFDPromotionService : HTSService <AFDPromotionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)socialRedPacketManager;
- (id)pineappleRedPacketManager;
- (id)innerPushManager;

@end

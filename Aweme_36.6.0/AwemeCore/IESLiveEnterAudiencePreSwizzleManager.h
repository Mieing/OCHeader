@interface IESLiveEnterAudiencePreSwizzleManager : NSObject

+ (void)scheduleTask:(long long)a0 roomType:(id /* block */)a1;
+ (void)afterEnterRoom;
+ (void)beforeEnterRoom:(id)a0;
+ (void)clearAllStoreInfos;
+ (void)scheduleTask:(long long)a0;

@end

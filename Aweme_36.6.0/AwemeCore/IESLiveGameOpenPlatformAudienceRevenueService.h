@class NSString, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformAudienceRevenueService : NSObject <IESLiveGameOpenPlatformAudienceRevenueServiceInterface>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSMutableDictionary *serviceItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopApp:(id)a0;
- (void)stopAllApps;
- (void)startApp:(id)a0;
- (void)appDidFinishLoadingContainer:(id)a0;
- (BOOL)isAppRunning:(id)a0;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void)showNotificationViewForApp:(id)a0 addToContainerBlock:(id /* block */)a1 layoutInContainerBlock:(id /* block */)a2;
- (void)stickieNotificationViewForApp:(id)a0;
- (void)showNotificationCenterForApp:(id)a0;
- (void).cxx_destruct;

@end

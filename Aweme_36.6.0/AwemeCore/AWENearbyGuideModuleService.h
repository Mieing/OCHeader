@class NSString;

@interface AWENearbyGuideModuleService : HTSService <AWENearbyGuideModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getGrouponMigrateComponentControllerName;
- (id)nearbyGuideShowManager;
- (void)tryShowGuideWithModel:(id)a0;
- (void)handleByteSyncGeneralBubbleData:(id)a0 noticeType:(long long)a1;
- (BOOL)registAllGuideImp;
- (void)hanldTimedGuideWithInitModel:(id)a0;
- (void)startRepeatTimer;
- (void)tryRecoverStorageTabDot;
- (void)removeNearbyDotWithPageType:(long long)a0 removeType:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)removeNearbyDotWithScene:(unsigned long long)a0 pageType:(long long)a1 removeType:(unsigned long long)a2 completion:(id /* block */)a3;

@end

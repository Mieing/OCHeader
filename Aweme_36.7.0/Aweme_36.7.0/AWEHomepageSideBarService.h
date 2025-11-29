@class NSString;

@interface AWEHomepageSideBarService : HTSService <AWEHomepageSideBarService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hpSideBarDefaultEntranceImageWithIdentification:(id)a0;
+ (BOOL)hasLeftSideBarEntrance;
+ (BOOL)isLeftSideBarOpening;
+ (BOOL)isLeftSideBarOpened;
+ (BOOL)isLeftSideBarOpenedAndVisible;
+ (BOOL)isDisplayingSideBarVisible;
+ (BOOL)isLeftSideBarClosed;
+ (BOOL)leftSideBarHasCurrentBussinessId:(id)a0;
+ (BOOL)leftSideBarCacheDataHasCurrentBusinessId:(id)a0;
+ (BOOL)hasSideBarEntryWithBusinessID:(id)a0 identification:(id)a1;
+ (void)showHPSideBarEntranceInteractiveAnimationModel:(id)a0;
+ (Class)aAWEJXWatchLaterSidebarAdapterClass;
+ (BOOL)canShowSideBarEntranceWithIdentification:(id)a0;

- (void)trackHPSideBarShowFailWithIdentification:(id)a0 withReason:(id)a1;
- (BOOL)isMergeProfileSideBarEnabled;
- (BOOL)refreshSideBarWithBusinessID:(id)a0 businessScene:(id)a1;
- (id)sideBarNotificationUIConfig;
- (id)generateHPProfileSideBarManager;
- (id)createHPSideBarAmbienceObjectWithEntranceViewModel:(id)a0 withHostParams:(id)a1;
- (void)updateHPSideBarAmbienceObjectWithEntranceViewModel:(id)a0 withHostParams:(id)a1;
- (id)aAWEJXWatchLaterSidebarAdapter;

@end

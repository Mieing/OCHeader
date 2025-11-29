@class NSString, MMFinderLivePrimitiveTask;

@interface MMFinderLivePrimitiveViewController : MMFinderLiveViewController <MMLiveConflictHandling>

@property (readonly, nonatomic) MMFinderLivePrimitiveTask *primitiveTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskIdDirectly:(id)a0;
- (void)initPrimitiveNotifications;
- (BOOL)disableLoadViews;
- (void)onLiveMinimizeWindowDidShiftIntoListChanged:(BOOL)a0;
- (void)handleUIOrientationChanged:(id)a0;
- (void)performBlockAfterAutoRotateIfNeeded;
- (BOOL)needHandleWaitingRotateBlock;
- (BOOL)resolveExternalConflicts;
- (BOOL)handleConflictWithNewLive:(id)a0 navigationController:(id)a1;
- (BOOL)handleConflictWithNewFinderLiveContentVMs:(id)a0 exportIds:(id)a1 selectedIndex:(id)a2 navigationController:(id)a3 tabType:(long long)a4 commentScene:(int)a5 replayEntryType:(id)a6 useVerticalFullscreenMinimization:(BOOL)a7 routeParam:(id)a8;
- (BOOL)handleConflictForEnableHomePageTransitionContentVMs:(id)a0 exportIds:(id)a1 selectedIndex:(id)a2 navigationController:(id)a3 tabType:(long long)a4 commentScene:(int)a5;
- (BOOL)restartLiveFromExtend:(id)a0;

@end

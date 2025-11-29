@class AWEVideoDraftTracker;

@interface AWEVideoDraftLifecycleManager : NSObject

@property (class, readonly, nonatomic) AWEVideoDraftLifecycleManager *sharedManager;

@property (nonatomic) BOOL didStart;
@property (retain, nonatomic) AWEVideoDraftTracker *draftTracker;

+ (void)registerDraftResourceMonitors;

- (void)p_addObserver;
- (void)coldStartAction;
- (void)p_handleAppBecomeActiveNotification;
- (void)p_updateDraftsStatusWithFinish:(id /* block */)a0;
- (void)executeUpdateDraftsStatus;
- (void)transitionStatusToDeleteWithDraftID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

@class AWEHPRollBackComponentCustomShowConfig, NSString, NSArray, AWEHPTabLandingRollBackFloatButton, NSMutableArray, UIViewController, AWEHPTabLandingRollBackConfig, NSPointerArray, AWEHPRollBackComponentCustomTriggerTask;
@protocol AWEHPSideBarReopenProtocol;

@interface AWEHPLandingTabRollBackTask : NSObject

@property (nonatomic) double lastShowInterval;
@property (nonatomic) double totalShowDuration;
@property (retain, nonatomic) NSMutableArray *showHandlers;
@property (retain, nonatomic) NSMutableArray *dismissHandlers;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) NSMutableArray *clickHandlers;
@property (readonly, nonatomic) double showDuration;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) long long state;
@property (retain, nonatomic) AWEHPTabLandingRollBackConfig *rollBackConfig;
@property (copy, nonatomic) NSString *showTabID;
@property (copy, nonatomic) NSString *rollBackTabID;
@property (nonatomic) BOOL hasBackGround;
@property (copy, nonatomic) NSArray *rootVCStack;
@property (copy, nonatomic) NSArray *presentedVCStack;
@property (retain, nonatomic) AWEHPTabLandingRollBackFloatButton *component;
@property (retain, nonatomic) NSPointerArray *transitionProviders;
@property (retain, nonatomic) UIViewController<AWEHPSideBarReopenProtocol> *childSideBarVC;
@property (nonatomic) BOOL isBlocking;
@property (retain, nonatomic) AWEHPRollBackComponentCustomTriggerTask *customTriggerTask;
@property (retain, nonatomic) AWEHPRollBackComponentCustomShowConfig *customConfig;
@property (copy, nonatomic) NSString *showPosition;

- (void)activateTask;
- (void)notifyShowWithResult:(long long)a0;
- (void)registerDismissHandler:(id /* block */)a0;
- (void)notifyClick;
- (void)notifyDismissWithType:(long long)a0;
- (void)p_distributeCompletionWithResult:(long long)a0;
- (void)registerShowHandler:(id /* block */)a0;
- (void)registerCompletionHandler:(id /* block */)a0;
- (void)registerClickHandler:(id /* block */)a0;
- (void)notifyRollBackWithSuccess:(BOOL)a0;
- (void)closeTaskWithType:(long long)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;

@end

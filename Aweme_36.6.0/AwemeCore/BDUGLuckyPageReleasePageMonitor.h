@class NSString, BDUGLuckyPageReleasePerPageStrategyModel, BDUGLuckyPageReleaseManager, NSObject;
@protocol OS_dispatch_source, BDXContainerProtocol;

@interface BDUGLuckyPageReleasePageMonitor : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) BDUGLuckyPageReleasePerPageStrategyModel *strategy;
@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (weak, nonatomic) BDUGLuckyPageReleaseManager *parentManager;
@property (nonatomic) BOOL containerHidden;
@property (nonatomic) BOOL containerRecycled;
@property (nonatomic) BOOL memoryMonitorUsed;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timedRemoveTimer;
@property (nonatomic) unsigned long long timedRemoveTimerCounter;

- (id)viewControllerOfResponder:(id)a0;
- (void)stopPageHideStrategy;
- (id)initWithPath:(id)a0 strategy:(id)a1 container:(id)a2 parent:(id)a3;
- (void)startPageHideStrategy;
- (void)triggerMemoryWarningStrategyWithStrategy:(id)a0 availableMemoryMB:(float)a1;
- (void)triggerOtherPageOpenStrategyWithPage:(id)a0 strategy:(id)a1 availableMemoryMB:(float)a2;
- (void)triggerOtherPageAppearStrategyWithPageName:(id)a0 page:(void *)a1 strategy:(id)a2 availableMemoryMB:(float)a3;
- (void)updateStrategy:(id)a0;
- (void)triggerPageHideMemoryStrategyWithMemoryStatus:(const void *)a0;
- (void)startMemoryMonitor;
- (void)stopMemoryMonitor;
- (void)removeContainerKitViewWithEventParams:(id)a0 ignoreHidden:(BOOL)a1;
- (BOOL)isInTopVCInNavigationControllerWithVC:(id)a0;
- (void)restartTimedRemoveTimerWithInterval:(double)a0;
- (void)cancelTimedRemoveTimer;
- (void)triggerPageHideTimedStrategyWithDelay:(double)a0;
- (BOOL)isTopVCInNavigationControllerWithVC:(id)a0;
- (BOOL)isVC:(id)a0 childVCOf:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

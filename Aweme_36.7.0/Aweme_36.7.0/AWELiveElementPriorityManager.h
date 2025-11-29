@class NSString, NSHashTable;
@protocol AWELivePreStreamBizStatusService, AWELivePriorityElementProtocol;

@interface AWELiveElementPriorityManager : NSObject <AWELivePreStreamBizContextUpdateReceiver>

@property (weak, nonatomic) id<AWELivePreStreamBizStatusService> bizStatusService;
@property (retain, nonatomic) NSHashTable *showElements;
@property (nonatomic) struct __CFRunLoopObserver { } *runloopObserver;
@property (retain, nonatomic) id<AWELivePriorityElementProtocol> excludeElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)attachElement:(id)a0;
- (BOOL)handlePriorityWithElement:(id)a0;
- (BOOL)excludeElementCouldShow:(id)a0;
- (void)p_scheduleReloadElementsIfNeeded;
- (void)handlePriorityElements;
- (void)p_cleanRunloopObserverIfNeeded;
- (void)didReceiveBizStatusChanged:(unsigned long long)a0 oldBizStatus:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)removeElement:(id)a0;
- (id)initWithService:(id)a0;

@end

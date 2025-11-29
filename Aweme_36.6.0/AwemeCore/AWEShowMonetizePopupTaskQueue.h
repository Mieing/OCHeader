@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEShowMonetizePopupTaskQueue : NSObject <AWEShowMonetizePopupTaskQueueService>

@property (retain, nonatomic) NSMutableDictionary *tasksByType;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ didStart;
@property (copy, nonatomic) id /* block */ didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runTargetTaskOrFinish:(id)a0 canRunNext:(BOOL)a1;
- (void)addPopupCouponTaskWithReferString:(id)a0 aweme:(id)a1 containerID:(id)a2 trackParamsHandler:(id /* block */)a3;
- (void)addPopupGiftTicketTaskWithGiftTicketJson:(id)a0 aweme:(id)a1 containerID:(id)a2 trackParamsHandler:(id /* block */)a3;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)run;

@end

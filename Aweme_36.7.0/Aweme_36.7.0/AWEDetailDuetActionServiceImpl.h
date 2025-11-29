@class AWEDetailDuetTracker, NSString, AWEDetailDuetViewModel;

@interface AWEDetailDuetActionServiceImpl : NSObject <AWEDetailActionService>

@property (retain, nonatomic) AWEDetailDuetViewModel *stateContext;
@property (retain, nonatomic) AWEDetailDuetTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionWithActionSender:(id)a0;
- (id)initWithStateContext:(id)a0 tracker:(id)a1;
- (void).cxx_destruct;

@end

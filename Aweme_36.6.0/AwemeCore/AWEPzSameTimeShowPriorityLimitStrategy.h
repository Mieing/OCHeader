@class NSString, AWEPzSameTimeShowPriorityLimitStrategyDataModel;
@protocol AWEPzStrategyConfigProtocol;

@interface AWEPzSameTimeShowPriorityLimitStrategy : NSObject <AWEPzStrategyProtocol, AWEPzVerifyStrategyProtocol, AWEPzComponentLifeCycleProtocol>

@property (retain, nonatomic) id<AWEPzStrategyConfigProtocol> config;
@property (retain, nonatomic) AWEPzSameTimeShowPriorityLimitStrategyDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (void)showComponent:(id)a0;
- (id)executePriority;
- (BOOL)verify:(id)a0;
- (void)postRemoveEventToComponent:(id)a0;
- (void)enumerateComponentsWith:(id)a0 resultBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

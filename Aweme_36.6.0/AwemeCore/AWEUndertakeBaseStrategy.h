@class NSArray, NSDictionary, AWEUndertakeStrategyDataModel, AWEUndertakeTriggeredStrategyModel, NSMutableArray, NSString;

@interface AWEUndertakeBaseStrategy : NSObject <AWEUndertakeStrategyProtocol>

@property (copy, nonatomic) NSArray *conditionClasses;
@property (retain, nonatomic) NSMutableArray *conditions;
@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) AWEUndertakeStrategyDataModel *dataModel;
@property (retain, nonatomic) AWEUndertakeTriggeredStrategyModel *triggeredActionModel;
@property (nonatomic) BOOL isObserving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setData:(id)a0 extraInfo:(id)a1;
- (void)injectConditions;
- (void)checkAllConditionsWithSkip:(id)a0;
- (void)stopObservingTriggerActions;
- (id)initStrategyWithModel:(id)a0;
- (BOOL)needUndertakeOnThisLaunch;
- (void)startObservingTriggerActions;
- (void)performUndertake;
- (void)condition:(id)a0 statusDidChange:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end

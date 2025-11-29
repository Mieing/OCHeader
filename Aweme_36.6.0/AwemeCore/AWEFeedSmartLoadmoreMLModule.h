@class AWEFeedSmartLoadmoreStrategyModel, NSArray, NSString, NSNumber;

@interface AWEFeedSmartLoadmoreMLModule : NSObject

@property (retain, nonatomic) AWEFeedSmartLoadmoreStrategyModel *strategyModel;
@property (nonatomic) long long loadmoreMLLimitCount;
@property (nonatomic) BOOL loadmoreDelayMsEnabled;
@property (retain, nonatomic) NSArray *modelExecuteConditions;
@property (retain, nonatomic) NSNumber *lpPredict;
@property (copy, nonatomic) NSString *lpPredictLabel;

- (void)predictResultWithCondition:(id)a0 inputData:(id)a1 block:(id /* block */)a2;
- (void)execLoadMoreBlockIfNeeded:(id /* block */)a0 withPredictLabel:(id)a1;
- (void)predictResultWithInputData:(id /* block */)a0 condition:(id /* block */)a1 andExecuteBlock:(id /* block */)a2;
- (BOOL)getConditionFilterResultWithFilter:(id)a0 compareBlock:(id /* block */)a1;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;

@end

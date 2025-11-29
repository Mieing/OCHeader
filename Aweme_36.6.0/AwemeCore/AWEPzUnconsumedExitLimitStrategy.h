@class AWEPzUnconsumedExitLimitStrategyDataModel, NSString, AWEPzStrategyExecutePriority;
@protocol AWEPzStrategyModelProtocol;

@interface AWEPzUnconsumedExitLimitStrategy : NSObject <AWEPzStrategyProtocol, AWEPzVerifyStrategyProtocol>

@property (retain, nonatomic) id<AWEPzStrategyModelProtocol> configModel;
@property (retain, nonatomic) AWEPzUnconsumedExitLimitStrategyDataModel *dataModel;
@property (retain, nonatomic) AWEPzStrategyExecutePriority *executePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

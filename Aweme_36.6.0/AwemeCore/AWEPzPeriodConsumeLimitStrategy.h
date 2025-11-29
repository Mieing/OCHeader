@class AWEPzPeriodConsumeLimitStrategyDataModel, NSString, AWEPzStrategyExecutePriority;
@protocol AWEPzStrategyModelProtocol;

@interface AWEPzPeriodConsumeLimitStrategy : NSObject <AWEPzStrategyProtocol, AWEPzVerifyStrategyProtocol>

@property (retain, nonatomic) id<AWEPzStrategyModelProtocol> configModel;
@property (retain, nonatomic) AWEPzPeriodConsumeLimitStrategyDataModel *dataModel;
@property (retain, nonatomic) AWEPzStrategyExecutePriority *executePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

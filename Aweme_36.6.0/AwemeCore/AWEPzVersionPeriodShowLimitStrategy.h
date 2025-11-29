@class AWEPzVersionPeriodShowLimitStrategyDataModel, MMKV, NSString;
@protocol AWEPzStrategyModelProtocol;

@interface AWEPzVersionPeriodShowLimitStrategy : NSObject <AWEPzStrategyProtocol, AWEPzVerifyStrategyProtocol, AWEPzComponentLifeCycleProtocol>

@property (retain, nonatomic) id<AWEPzStrategyModelProtocol> configModel;
@property (retain, nonatomic) AWEPzVersionPeriodShowLimitStrategyDataModel *dataModel;
@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mmkv;

- (void)setupWithModel:(id)a0;
- (void)showComponent:(id)a0;
- (id)executePriority;
- (BOOL)verify:(id)a0;
- (long long)getVersionShowCountOfComponent:(id)a0;
- (void)increaseVersionShowCountOfComponent:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

@class NSString, AWEPzTotalShowLimitStrategyDataModel;
@protocol AWEPzStrategyModelProtocol;

@interface AWEPzTotalShowLimitStrategy : NSObject <AWEPzStrategyProtocol, AWEPzVerifyStrategyProtocol>

@property (retain, nonatomic) AWEPzTotalShowLimitStrategyDataModel *dataModel;
@property (retain, nonatomic) id<AWEPzStrategyModelProtocol> configModel;
@property (nonatomic) BOOL dataError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithModel:(id)a0;
- (id)executePriority;
- (BOOL)verify:(id)a0;
- (long long)queryShowCountWithComponentID:(id)a0 secUid:(id)a1 engine:(id)a2;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

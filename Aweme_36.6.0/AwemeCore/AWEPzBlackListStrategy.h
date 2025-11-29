@class NSString, AWEPzBlackListStrategyDataModel;

@interface AWEPzBlackListStrategy : NSObject <AWEPzStrategyProtocol, AWEPzVerifyStrategyProtocol>

@property (retain, nonatomic) AWEPzBlackListStrategyDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithModel:(id)a0;
- (id)executePriority;
- (BOOL)verify:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

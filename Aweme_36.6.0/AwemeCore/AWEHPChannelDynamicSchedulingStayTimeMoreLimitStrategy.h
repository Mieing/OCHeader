@class NSString, AWEHPChannelDynamicSchedulingLimitStrategyModel;

@interface AWEHPChannelDynamicSchedulingStayTimeMoreLimitStrategy : NSObject <AWEHPChannelDynamicSchedulingLimitStrategyProtocol>

@property (retain, nonatomic) AWEHPChannelDynamicSchedulingLimitStrategyModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryCheckReleaseChannelWithLoadChannelModels:(id)a0 withCurrentChannelId:(id)a1 withWhiteChannelList:(id)a2 withCompletion:(id /* block */)a3;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end

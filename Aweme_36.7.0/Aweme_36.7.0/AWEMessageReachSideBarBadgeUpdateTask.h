@class AWEMRSideBarBagdeStrategyResultModel;
@protocol AWEMessageReachSideBarNoticeInfoUpdateProtocol;

@interface AWEMessageReachSideBarBadgeUpdateTask : NSObject

@property (nonatomic) unsigned long long taskID;
@property (retain, nonatomic) id<AWEMessageReachSideBarNoticeInfoUpdateProtocol> updateInfo;
@property (copy, nonatomic) id /* block */ strategyCompletionBlock;
@property (nonatomic) BOOL hasInvokeCompletion;
@property (retain, nonatomic) AWEMRSideBarBagdeStrategyResultModel *strategyResultModel;
@property (nonatomic) BOOL isFromRetry;

+ (id)createUpdateTaskWithUpdateInfo:(id)a0 strategyCompletionBlock:(id /* block */)a1;

- (void)invokeCompletionBlockWithStrategyResult:(id)a0 componentModel:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTaskID:(unsigned long long)a0;

@end

@class NSMutableArray;

@interface AWEVideoDraftExpireTimeManager : NSObject

@property (retain, nonatomic) NSMutableArray *blockMutableArray;

- (void)addRegisteredBlocks;
- (void)registerDraftExpireHandlerForPublishTask;
- (void)registerDraftExpireHandlerForOriginTextMode;
- (void)registerDraftExpireHandlerForCloseFriendMoment;
- (void)registExtendExpireTimeBlock:(id /* block */)a0;
- (long long)needDraftExpireTime:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, MMLiveTaskId, NSMutableArray;

@interface MMFinderLiveAppMsgInfoCacheLogic : NSObject <MMLiveTaskMgrExt>

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSMutableArray *appMsgInfoCacheArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)addAppMsgInfoCache:(id)a0;
- (void)processAllAppMsgInfoCache;
- (void)onMinimizeWindowDidHide:(id)a0;
- (void).cxx_destruct;

@end

@class NSArray;
@protocol IESIMCommonAsyncQueueProtocol;

@interface AWEIMLandingSnapShotStorage : NSObject

@property (retain, nonatomic) NSArray *snapShotModelList;
@property (weak, nonatomic) id<IESIMCommonAsyncQueueProtocol> asyncQueueService;

+ (id)storageKey:(id)a0;
+ (id)shared;

- (long long)cacheChatCountWithHeaderHeight:(double)a0;
- (BOOL)p_enableSnapShotForChat:(id)a0;
- (void)storeChatList:(id)a0 withHeaderHeight:(double)a1 withListViewModel:(id)a2;
- (void).cxx_destruct;
- (void)clear;

@end

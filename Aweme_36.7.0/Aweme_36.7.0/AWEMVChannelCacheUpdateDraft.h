@class NSLock, NSArray;

@interface AWEMVChannelCacheUpdateDraft : NSObject

@property (retain, nonatomic) NSLock *lock;
@property BOOL isCancelled;
@property (nonatomic) BOOL hasFailed;
@property (nonatomic) long long requestingCount;
@property (retain, nonatomic) NSArray *requestList;
@property (copy, nonatomic) id /* block */ completion;

- (void)loadAllImages:(id)a0 needAvatar:(BOOL)a1 completion:(id /* block */)a2;
- (void)onRequestComplete:(id)a0 success:(BOOL)a1 isCoverRequest:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end

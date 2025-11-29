@class NSString, NSMutableArray, IESLiveGCDTimer;

@interface IESLiveInnerFeedUnreadCacheController : NSObject <IESLiveCheckInterceptor, IESLiveInnerFeedUnreadCacheService>

@property (retain, nonatomic) NSMutableArray *cachedUnreadItems;
@property (retain, nonatomic) IESLiveGCDTimer *timeoutTimer;
@property (nonatomic) long long timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveStatusCheckInfo;
- (void)liveStatusChange:(id)a0;
- (void)saveUnreadFeedItems:(id)a0;
- (void)removeCachedUnreadItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

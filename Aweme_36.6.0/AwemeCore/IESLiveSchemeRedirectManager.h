@class IESLiveSchemeRedirectStorage, IESLiveSchemeRedirectDownloadTask, NSDate, NSObject, NSNumber;
@protocol OS_dispatch_source;

@interface IESLiveSchemeRedirectManager : NSObject

@property (retain, nonatomic) IESLiveSchemeRedirectDownloadTask *task;
@property (retain, nonatomic) IESLiveSchemeRedirectStorage *storage;
@property (retain, nonatomic) NSDate *lastUpdateTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL timerHasResume;
@property (retain, nonatomic) NSNumber *currentRomaSdkPollInternal;
@property (nonatomic) BOOL enableRomaSdkPoll;
@property (retain, nonatomic) NSNumber *romaSdkPollInternal;

+ (id)shareManager;

- (id)getComponentsWithURLString:(id)a0;
- (void)initTimer;
- (void)resolveRedirectSchemeWithOriginalScheme:(id)a0 completion:(id /* block */)a1;
- (void)forceSyncAndResolveRedirectSchemeWith:(id)a0 completion:(id /* block */)a1;
- (void)resolveRedirectSchemeWith:(id)a0 completion:(id /* block */)a1;
- (void)pollFetchSchemeRedirectConfig;
- (void)fetchRedirectConfig:(id /* block */)a0;
- (void)resolveRedirectSchemeWith:(id)a0 loopCount:(long long)a1 completion:(id /* block */)a2;
- (void)fetchRedirectConfigIfNeeded;
- (void)resolveRedirectSchemeWithOriginalScheme:(id)a0 loopCount:(long long)a1 completion:(id /* block */)a2;
- (id)getRedirectConfig;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

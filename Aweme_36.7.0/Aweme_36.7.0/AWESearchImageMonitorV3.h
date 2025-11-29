@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWESearchImageMonitorV3 : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitorParams;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)componentDidEndDisplay:(id)a0;
+ (BOOL)imageMonitorV3EnableForDualImageVideoCover;
+ (void)componentDidLoadImage:(id)a0 request:(id)a1;
+ (void)searchImageViewLoadStart:(id)a0 url:(id)a1;
+ (BOOL)enableMonitorV3;
+ (void)componentWillDisplay:(long long)a0 monitorTag:(id)a1;
+ (void)componentWillRender:(id)a0;
+ (void)searchImagePrefetchStart:(id)a0 url:(id)a1;
+ (void)clear;
+ (id)sharedInstance;

- (void)p_componentWillRender:(id)a0;
- (void)p_componentWillDisplay:(long long)a0 monitorTag:(id)a1;
- (void)p_componentDidEndDisplay:(id)a0;
- (void)p_componentDidLoadImage:(id)a0 request:(id)a1;
- (void)p_searchImageViewLoadStart:(id)a0 url:(id)a1;
- (void)p_searchImagePrefetchStart:(id)a0 url:(id)a1;
- (void)p_performInSerialQueue:(id /* block */)a0;
- (id)p_getMonitorParams:(id)a0 shouldCreateIfNotExist:(BOOL)a1;
- (void)reportIfNeedWithMonitorParams:(id)a0;
- (id)p_getImageTrackParams:(id)a0 url:(id)a1 shouldCreateIfNotExist:(BOOL)a2;
- (id)convertReportInfoWithParams:(id)a0 imageTrackParams:(id)a1;
- (void)addParamFromQueryIntoParamDic:(id)a0 uri:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end

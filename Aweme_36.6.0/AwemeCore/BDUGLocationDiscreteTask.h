@class NSString, NSMutableDictionary;

@interface BDUGLocationDiscreteTask : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskMapMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lastReqMutex;
}

@property (nonatomic) double lastReqTime;
@property (retain, nonatomic) NSString *lastSource;
@property (retain, nonatomic) NSMutableDictionary *taskMap;
@property (retain, nonatomic) NSMutableDictionary *singleTaskMap;
@property (retain, nonatomic) NSMutableDictionary *requestLocationMap;
@property double lastLocTime;

- (void)useLastLocationWithToken:(id)a0;
- (void)removeRequestLocationWithID:(id)a0;
- (BOOL)shouldUseFirstLoc:(id)a0;
- (void)secondaryLocationSeqWithTask:(id)a0 accuracy:(long long)a1 uploadSource:(id)a2 cert:(id)a3 option:(id)a4 completion:(id /* block */)a5;
- (id)tryBindTask:(long long)a0 completion:(id /* block */)a1 timeoutCompletion:(id /* block */)a2;
- (BOOL)isForbiddenRequestLocation:(id)a0;
- (BOOL)hitCertWhiteList:(id)a0;
- (void)removeAllLocations;
- (id)addLocationWithDesiredAccuracy:(long long)a0 cacheTime:(double)a1 isUseCacheTime:(BOOL)a2 timeout:(double)a3 uploadSource:(id)a4 intelUploadInterval:(double)a5 option:(id)a6 cert:(id)a7 timeoutHandler:(id /* block */)a8 completionHandler:(id /* block */)a9;
- (void)removeLocationWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

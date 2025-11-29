@class NSString, NSHashTable;

@interface IESLiveTrackerInterceptor : NSObject <IESLiveTrackerInterceptorService, IESLiveTrackerDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSHashTable *subInterceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (BOOL)shouldFilterTrackEvent:(id)a0 params:(id)a1;
- (void)addArrayElement:(id)a0;
- (void)removeArrayElement:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

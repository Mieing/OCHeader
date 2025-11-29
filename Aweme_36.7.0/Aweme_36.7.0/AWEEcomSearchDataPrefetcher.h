@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEEcomSearchDataPrefetcher : HTSService <AWEEcomSearchDataPrefetcher>

@property (retain, nonatomic) NSMutableDictionary *prefetchDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preloadHelperQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)modelForKey:(id)a0;
- (void)removeModelForKey:(id)a0;
- (void)prefetchDataWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

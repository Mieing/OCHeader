@class NSDictionary, NSString;
@protocol AWEMallImagesPrefetchDelegate;

@interface AWEMallPrefetchProcessor : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSDictionary *data;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) NSString *prefetchId;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *prefetchApiConfig;
@property (copy, nonatomic) NSDictionary *prefetchImagesConfig;
@property (nonatomic) double dataCreateTimeInterval;
@property (nonatomic) double validTime;
@property (weak, nonatomic) id<AWEMallImagesPrefetchDelegate> delegate;

- (id)paramsFromConfig:(id)a0;
- (void)fetchDataWithCallback:(id /* block */)a0;
- (void)triggerMallPrefetch;
- (void).cxx_destruct;
- (id)init;

@end

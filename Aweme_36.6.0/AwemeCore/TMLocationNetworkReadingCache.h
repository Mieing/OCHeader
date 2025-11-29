@class TMNetworkDetectCache, NSString;

@interface TMLocationNetworkReadingCache : NSObject <CLLocationManagerDelegate, TMNetworkContentDetectCacheProtocol>

@property (retain, nonatomic) TMNetworkDetectCache *lngCache;
@property (retain, nonatomic) TMNetworkDetectCache *latCache;
@property (retain, nonatomic) TMNetworkDetectCache *locationCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;
+ (id)sharedInstance;

- (BOOL)detectedByContent:(id)a0 cacheParams:(id)a1;
- (void)asyncUpdateCacheWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)cacheLng:(double)a0 lat:(double)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)cacheItems;

@end

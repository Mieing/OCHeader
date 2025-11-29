@class NSString, YYMemoryCache;
@protocol PIACacheProcessorProtocol;

@interface PIACachesInterceptor : NSObject <IESFalconCustomInterceptor>

@property (retain, nonatomic) YYMemoryCache *caches;
@property (weak, nonatomic) id<PIACacheProcessorProtocol> cacheProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInterceptor;

- (id)falconDataForURLRequest:(id)a0;
- (unsigned long long)falconPriority;
- (BOOL)shouldInterceptForRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

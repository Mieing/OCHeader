@class NSString, NSMutableDictionary, IESForestKit, NSObject;
@protocol OS_dispatch_queue;

@interface LynxResourceService : NSObject <LynxServiceResourceProtocol> {
    NSMutableDictionary *_forestKits;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

@property (retain, nonatomic) IESForestKit *forestKit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createRequestParams:(id)a0;

- (id)fetchResourceAsync:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (id)fetchResourceSync:(id)a0 parameters:(id)a1 error:(id *)a2;
- (void)preloadMedia:(id)a0 cacheKey:(id)a1 videoID:(id)a2 videoModel:(id)a3 resolution:(unsigned long long)a4 encodeType:(unsigned long long)a5 apiString:(id)a6 size:(long long)a7;
- (void)cancelPreloadMedia:(id)a0 videoID:(id)a1 videoModel:(BOOL)a2;
- (void)addResourceLoader:(id)a0 TemplateUrl:(id)a1;
- (id)getForestKitByKey:(id)a0;
- (void)addForestKit:(id)a0 Key:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

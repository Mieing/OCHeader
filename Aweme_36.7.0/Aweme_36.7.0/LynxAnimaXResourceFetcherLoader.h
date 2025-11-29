@class NSString;
@protocol LynxResourceFetcher, LynxGenericResourceFetcher;

@interface LynxAnimaXResourceFetcherLoader : NSObject <AnimaXLoaderProtocol>

@property (nonatomic) BOOL useLegacyFetcher;
@property (weak, nonatomic) id<LynxGenericResourceFetcher> genericFetcher;
@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loaderWithLynxUIContext:(id)a0;
+ (BOOL)isLegacyFetcherEnabled;
+ (id)loaderWithLynxGenericFetcher:(id)a0;
+ (id)loaderWithLynxResourceFetcher:(id)a0;

- (unsigned long long)getScheme;
- (id)initWithGenericFetcher:(id)a0 resourceFetcher:(id)a1;
- (BOOL)tryGenericFetcher:(id)a0 completion:(id /* block */)a1;
- (BOOL)tryLegacyFetcher:(id)a0 completion:(id /* block */)a1;
- (void)fetchURL:(id)a0 withFetcher:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0 completion:(id /* block */)a1;

@end

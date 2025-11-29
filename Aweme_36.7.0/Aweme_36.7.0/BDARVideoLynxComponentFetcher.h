@class BDARVPayloadData, NSString;

@interface BDARVideoLynxComponentFetcher : NSObject <LynxDynamicComponentFetcher>

@property (retain, nonatomic) BDARVPayloadData *payloadData;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) BOOL useForest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadDynamicComponent:(id)a0 withLoadedBlock:(id /* block */)a1;
- (id)initWithPayloadData:(id)a0 disableCache:(BOOL)a1;
- (void)analysisWithSchema:(id)a0 withLoadedBlock:(id /* block */)a1;
- (id)makeError:(id)a0;
- (BOOL)checkValidSchema:(id)a0;
- (BOOL)checkPrefixHttpsSchema:(id)a0 query:(id)a1 loadedBlock:(id /* block */)a2;
- (BOOL)checkSpecialUrlWithQuery:(id)a0 urlComponents:(id)a1 loadedBlock:(id /* block */)a2;
- (BOOL)checkBase64WithQuery:(id)a0 urlComponents:(id)a1 loadedBlock:(id /* block */)a2;
- (BOOL)checkComponentTypeWithQuery:(id)a0 urlComponents:(id)a1 loadedBlock:(id /* block */)a2;
- (BOOL)checkChannelAndFallBackWithQuery:(id)a0 urlComponents:(id)a1 loadedBlock:(id /* block */)a2;
- (id)findKeyword:(id)a0 urlComponents:(id)a1;
- (void)requestTemplateWithURL:(id)a0 enableCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestTemplateURLUseForest:(id)a0 loadedBlock:(id /* block */)a1;
- (BOOL)checkGeckoDataWithSchema:(id)a0 loadedBlock:(id /* block */)a1;
- (id)geckoData:(id)a0;
- (void).cxx_destruct;

@end

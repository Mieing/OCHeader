@class NSArray, NSString, NSMutableDictionary, IESECListKitDynamicResponseModel, NSDictionary, IESECListKitBundleConfig, NSMutableArray;
@protocol IESECListKitDynamicRequestDelegate;

@interface IESECListKitDynamicRequest : NSObject <IESECListKitDynamicRequestProtocol>

@property (copy, nonatomic) NSString *bundleConfigURL;
@property (retain, nonatomic) IESECListKitBundleConfig *bundleConfig;
@property (retain, nonatomic) NSMutableDictionary *cachedResponse;
@property (retain, nonatomic) NSMutableDictionary *cachedErrorResponse;
@property (retain, nonatomic) NSMutableDictionary *allParamsFromClient;
@property (retain, nonatomic) NSMutableDictionary *dynamicParams;
@property (retain, nonatomic) NSMutableArray *responseNeedCallback;
@property (nonatomic) BOOL hasChunked;
@property (retain, nonatomic) IESECListKitDynamicResponseModel *firstChunkResponse;
@property (retain, nonatomic) IESECListKitDynamicResponseModel *secondChunkResponse;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (weak, nonatomic) id<IESECListKitDynamicRequestDelegate> requestDelegate;
@property (nonatomic) long long nextPageCount;
@property (nonatomic) BOOL enableChunkFlag;
@property (copy, nonatomic) NSArray *trackChunkFavoriteSectionInfo;
@property (copy, nonatomic) NSString *configNameSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableNetPerfMetrics;

- (void)fetchWithRequest:(id)a0 params:(id)a1 header:(id)a2 complete:(id /* block */)a3;
- (id)initWithBundleConfigURL:(id)a0;
- (void)resetClientParams;
- (id)getCachedValueWithApiKey:(id)a0 majorKey:(id)a1 subKey:(id)a2 subSubKey:(id)a3;
- (BOOL)enableChunkForTrackData;
- (void)appendClientParams:(id)a0;
- (void)removeClientParamsKey:(id)a0;
- (BOOL)enableChunkForFullData;
- (void)appendDynamicParams:(id)a0;
- (void)loadBundleWithComplete:(id /* block */)a0;
- (id)apiConfig;
- (void)fetchWithAPIKeys:(id)a0 complete:(id /* block */)a1;
- (void)fetchWithAPIKeys:(id)a0 header:(id)a1 complete:(id /* block */)a2;
- (BOOL)enableChunkForTrackDataFromExp;
- (BOOL)enableChunkForFullDataFromExp;
- (void)fetchWithAPIKeys:(id)a0 mainAPIFirst:(BOOL)a1 complete:(id /* block */)a2;
- (id)resourceFromString:(id)a0;
- (void)resetWith:(id)a0;
- (id)catchDynamicModel;
- (id)getCachedErrorResponseValueWithApiKey:(id)a0;
- (void)fetchWithAPIKey:(id)a0 header:(id)a1 params:(id)a2 complete:(id /* block */)a3;
- (void)callbackBundleFetchFailWithErrorCode:(unsigned long long)a0 errMsg:(id)a1 complete:(id /* block */)a2;
- (void)fetchWithAPIKeys:(id)a0 mainAPIFirst:(BOOL)a1 header:(id)a2 complete:(id /* block */)a3;
- (void)callbackDynamicAPIFailWithErrorCode:(unsigned long long)a0 errMsg:(id)a1 complete:(id /* block */)a2;
- (void)callbackAllResponse:(id /* block */)a0;
- (void)sendRequest:(id)a0 params:(id)a1 header:(id)a2 complete:(id /* block */)a3;
- (id)getFrequencyControlDataWithKey:(id)a0;
- (id)getStorageJsonStringFromRequest:(id)a0;
- (BOOL)isChunkApiForTrackData:(id)a0;
- (void)cacheHomepageChunkDataForTrackData:(id)a0 apiKey:(id)a1;
- (BOOL)isChunkApiForFullData:(id)a0;
- (void)cacheHomepageChunkDataForFullData:(id)a0 apiKey:(id)a1;
- (void)trackTTNetResponse:(id)a0;
- (BOOL)isRenderingChunk:(id)a0;
- (BOOL)isTrackingChunk:(id)a0;
- (void).cxx_destruct;

@end

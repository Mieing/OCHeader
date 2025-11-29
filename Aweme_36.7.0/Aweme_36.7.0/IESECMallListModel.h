@class NSString, NSDictionary, IESECMallListKitBffDataModel, NSError;

@interface IESECMallListModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMallListKitBffDataModel *bffData;
@property (copy, nonatomic) NSString *chunkedSection;
@property (nonatomic) long long chunkIndex;
@property (copy, nonatomic) NSDictionary *serverTime;
@property (nonatomic) BOOL isSkeleton;
@property (nonatomic) BOOL isMain;
@property (nonatomic) BOOL illegalTabId;
@property (nonatomic) BOOL isGeckoReady;
@property (copy, nonatomic) NSString *apiKey;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long errorType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isCacheData;
@property (nonatomic) BOOL isCachedDataFromAIPrefetch;
@property (nonatomic) BOOL isAiPrefetchData;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *triggers;
@property (nonatomic) unsigned long long prefetchStatus;
@property (nonatomic) long long tabId;
@property (nonatomic) double validTime;
@property (nonatomic) double dataCreateTimestamp;
@property (copy, nonatomic) NSDictionary *pitaysMessage;
@property (nonatomic) BOOL hasPreloadImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bffDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSArray, CAKAlbumCollectionStatisticsInfoModel;

@interface CAKAlbumCollectionStruct : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *collectionID;
@property (copy, nonatomic) NSArray *assetIdentifierList;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *themeID;
@property (copy, nonatomic) NSString *followTopicName;
@property (copy, nonatomic) NSString *followTopicID;
@property (nonatomic) long long collectionType;
@property (nonatomic) double generatedTimestamp;
@property (nonatomic) double qualityValue;
@property (nonatomic) double startShowTime;
@property (nonatomic) double endShowTime;
@property (copy, nonatomic) NSString *coverImageAssetID;
@property (copy, nonatomic) NSString *collectionTitle;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) CAKAlbumCollectionStatisticsInfoModel *statisticsInfoModel;
@property (nonatomic) long long displayCount;
@property (nonatomic) BOOL isDelete;
@property (nonatomic) BOOL hasShownedAsPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)structWithCollectionModel:(id)a0;
+ (id)statisticsInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isMarketCollection;
- (BOOL)isValidMarketCollection;
- (void).cxx_destruct;

@end

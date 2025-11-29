@class NSString, AWESearchGlobalDoodleConfigModel, NSArray, AWEDoubleColumnSearchMerchandiseModel, AWEEcommerceSearchSuspensionItemsSectionModel, NSDictionary, AWEGeneralSearchBackgroundModel, NSNumber, AWEDoubleColumnSearchActivityModel;

@interface AWESearchEcommercePhotoSearchDataResponse : AWESearchResultCachalotDataResponse

@property (copy, nonatomic) NSDictionary *replaceCachalotDataMap;
@property (copy, nonatomic) NSString *defaultFormat;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSString *imageUri;
@property (retain, nonatomic) NSArray *detections;
@property (nonatomic) long long playMode;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *filterComponent;
@property (copy, nonatomic) NSArray *videoQueryData;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *searchBackgroundConfig;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *originalProductCard;
@property (copy, nonatomic) NSDictionary *toastInfo;
@property (retain, nonatomic) AWEDoubleColumnSearchActivityModel *searchMarketing;
@property (copy, nonatomic) NSArray *topCardItems;
@property (copy, nonatomic) NSArray *sortSectionItems;
@property (retain, nonatomic) AWEEcommerceSearchSuspensionItemsSectionModel *suspensionItemsSection;
@property (copy, nonatomic) NSString *ecomSearchPassThrough;
@property (copy, nonatomic) NSString *ecomSearchAllPassThrough;
@property (copy, nonatomic) NSString *searchChannel;
@property (retain, nonatomic) NSNumber *moreProductButtonIndex;
@property (copy, nonatomic) NSString *nextPageSearchId;

+ (id)extraModelJSONTransformer;
+ (id)searchBackgroundConfigJSONTransformer;
+ (id)filterComponentJSONTransformer;
+ (id)videoQueryDataJSONTransformer;
+ (id)originalProductCardJSONTransformer;
+ (id)suspensionItemsSectionJSONTransformer;
+ (id)topCardItemsJSONTransformer;
+ (id)sortSectionItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

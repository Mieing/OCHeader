@class NSString, IESECURLModel, NSDictionary;

@interface IESECStoreListInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long storeListType;
@property (copy, nonatomic) NSString *storeListName;
@property (copy, nonatomic) NSString *storeListId;
@property (retain, nonatomic) IESECURLModel *storeListPicUrl;
@property (retain, nonatomic) IESECURLModel *promotionStoreListPicUrl;
@property (copy, nonatomic) NSString *storeListNameColor;
@property (copy, nonatomic) NSString *promotionStoreListNameColor;
@property (copy, nonatomic) NSString *storeListPageUrl;
@property (nonatomic) long long storeListRank;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *storeListSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storeListSettingsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

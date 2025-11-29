@class IESECListKitFeedExtraModel, NSArray, NSDictionary, NSString, NSMutableArray, IESECListKitStyleModel;

@interface IESECListKitListModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *itemConfigs;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) IESECListKitStyleModel *listStyle;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL refreshKeepSelect;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) IESECListKitFeedExtraModel *extra;
@property (nonatomic) long long preRequestCount;
@property (nonatomic) long long nextPageCount;
@property (retain, nonatomic) NSDictionary *commonLogData;
@property (retain, nonatomic) NSMutableArray *preloadSectionVMs;
@property (nonatomic) BOOL isCacheData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)sectionsJSONTransformer;
+ (id)listStyleJSONTransformer;
+ (id)itemConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

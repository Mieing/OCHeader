@class NSString, NSDictionary, NSArray, POIMediaListContainerModel;

@interface POIMediaListPageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *cacheDataInDictionary;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long videoStyle;
@property (copy, nonatomic) NSString *data;
@property (retain, nonatomic) POIMediaListContainerModel *headerContainer;
@property (retain, nonatomic) POIMediaListContainerModel *footerContainer;
@property (copy, nonatomic) NSArray *itemsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)safelyGetCurrentDataInDictionary;
- (void).cxx_destruct;

@end

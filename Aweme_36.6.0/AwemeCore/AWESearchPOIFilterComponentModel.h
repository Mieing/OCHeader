@class NSArray, NSString, NSNumber;

@interface AWESearchPOIFilterComponentModel : AWEDoubleColumnSearchMerchandiseFilterComponentModel

@property (copy, nonatomic) NSArray *arrBarConfigInfos;
@property (copy, nonatomic) NSString *strSubText;
@property (copy, nonatomic) NSNumber *isSubItemInitialUseMaxWidth;
@property (nonatomic) BOOL shouldShowAsManualSelect;

+ (BOOL)usePOISearchFilterComponentModelClassWithJSONDictionary:(id)a0;
+ (id)arrBarConfigInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

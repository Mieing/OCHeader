@class NSString, NSArray, AWEPOIServiceSpuEntryModel;

@interface AWEPOIProductInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *leftTitle;
@property (copy, nonatomic) NSString *moreTitle;
@property (copy, nonatomic) NSString *moreUrl;
@property (retain, nonatomic) NSArray *products;
@property (nonatomic) unsigned long long displayStyle;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *supplierId;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *poiCustomerEntry;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

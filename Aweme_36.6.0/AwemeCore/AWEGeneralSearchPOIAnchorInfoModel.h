@class NSString, NSAttributedString, AWEURLModel;

@interface AWEGeneralSearchPOIAnchorInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiId;
@property (retain, nonatomic) AWEURLModel *iconList;
@property (nonatomic) long long searchStyle;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *discountInfo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTag;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) BOOL hasDeliveryProduct;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *poiBackendType;
@property (nonatomic) long long poiDeviceSamecity;
@property (copy, nonatomic) NSString *poiURL;

+ (id)iconListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

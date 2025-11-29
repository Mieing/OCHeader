@class UIColor, NSString, NSArray, AWENearbyPOICardRecommendInfo, AWENearbyPOICardServiceIcon, AWEAwemeModel, AWEURLModel;

@interface AWENearbyPOIContentModel : AWEPOIContentItemModel

@property (copy, nonatomic) NSString *coverRGB;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *capsuleColor;
@property (copy, nonatomic) NSString *projectionColor;
@property (nonatomic) double cost;
@property (copy, nonatomic) AWEURLModel *favRstImageURL;
@property (readonly, nonatomic) UIColor *coverRGBColorObj;
@property (readonly, nonatomic) UIColor *bgColorObj;
@property (readonly, nonatomic) UIColor *capsuleColorObj;
@property (copy, nonatomic) NSArray *coverMasking;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *recommendTagsArray;
@property (retain, nonatomic) AWENearbyPOICardRecommendInfo *recommendInfo;
@property (retain, nonatomic) AWENearbyPOICardServiceIcon *serviceIcon;
@property (copy, nonatomic) NSString *brandID;
@property (copy, nonatomic) NSString *collectShowText;
@property (copy, nonatomic) NSArray *spuInfos;
@property (nonatomic) double minDiscount;
@property (retain, nonatomic) AWEURLModel *bgColorImg;
@property (retain, nonatomic) NSString *sortID;
@property (readonly, nonatomic) UIColor *projectionColorObj;
@property (copy, nonatomic) NSString *lynxUrl;
@property (retain, nonatomic) AWEAwemeModel *poiVideo;
@property (nonatomic) long long imageCount;
@property (nonatomic) long long hue;

+ (BOOL)automaticallyDefaultMapping;
+ (id)spuInfosJSONTransformer;
+ (id)recommendInfoJSONTransformer;
+ (id)poiVideoJSONTransformer;
+ (id)serviceIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

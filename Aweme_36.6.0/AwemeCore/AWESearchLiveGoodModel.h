@class NSString, NSNumber, NSArray;

@interface AWESearchLiveGoodModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSNumber *commodityType;
@property (copy, nonatomic) NSString *liveProductType;
@property (retain, nonatomic) NSArray *tagInfos;

+ (id)tagInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

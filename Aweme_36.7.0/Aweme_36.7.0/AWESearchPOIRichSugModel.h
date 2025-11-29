@class NSString;

@interface AWESearchPOIRichSugModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *avgPriceText;
@property (copy, nonatomic) NSString *locationText;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiType;
@property (copy, nonatomic) NSString *distanceText;
@property (copy, nonatomic) NSString *poiID;
@property (nonatomic) double avgPrice;
@property (nonatomic) double distance;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSDictionary, IESLLPOIDouDiscountPOICardConf, IESLLifeURLModel;

@interface IESLLPOIDouDiscountItemCard : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long avgPrice;
@property (copy, nonatomic) NSString *backendTypeName;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *buyButtonText;
@property (retain, nonatomic) NSDictionary *qualityScoreBigPic;
@property (retain, nonatomic) NSDictionary *qualityScoreSmallPic;
@property (copy, nonatomic) NSString *rankText;
@property (copy, nonatomic) NSString *bizZone;
@property (copy, nonatomic) NSString *distanceText;
@property (copy, nonatomic) NSString *poiID;
@property (nonatomic) long long recommendScore;
@property (retain, nonatomic) NSString *lynxCardUrl;
@property (nonatomic) long long openTimems;
@property (retain, nonatomic) IESLLPOIDouDiscountPOICardConf *douDiscountPOICardConf;
@property (retain, nonatomic) IESLLifeURLModel *poiHeadImg;
@property (nonatomic) long long distance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

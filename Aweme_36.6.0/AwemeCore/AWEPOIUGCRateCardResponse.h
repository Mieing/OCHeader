@class NSString, NSArray, AWEPOICouponDescModel, AWEPOIInfoModel;

@interface AWEPOIUGCRateCardResponse : AWEBaseApiModel

@property (nonatomic) BOOL hasRate;
@property (retain, nonatomic) AWEPOIInfoModel *poiInfo;
@property (copy, nonatomic) NSString *contentPrompt;
@property (retain, nonatomic) NSArray *rateGrade;
@property (retain, nonatomic) AWEPOICouponDescModel *couponDesc;
@property (copy, nonatomic) NSString *topPrompt;
@property (retain, nonatomic) NSArray *poiRateCardExpGroups;
@property (retain, nonatomic) NSArray *subTitles;
@property (copy, nonatomic) NSString *subTitleLabel;

+ (id)rateGradeJSONTransformer;
+ (id)poiRateCardExpGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

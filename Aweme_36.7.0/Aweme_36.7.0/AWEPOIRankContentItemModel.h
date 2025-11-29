@class NSString, AWEURLModel;

@interface AWEPOIRankContentItemModel : AWEPOIContentItemModel

@property (copy, nonatomic) NSString *brandID;
@property (copy, nonatomic) NSString *cardType;
@property (retain, nonatomic) AWEURLModel *poiRankScoreIconURL;
@property (nonatomic) BOOL isMain;

+ (id)poiRankScoreIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

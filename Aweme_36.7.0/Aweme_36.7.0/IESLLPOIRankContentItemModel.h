@class NSString, IESLLifeURLModel;

@interface IESLLPOIRankContentItemModel : IESLLPOIContentItemModel

@property (copy, nonatomic) NSString *brandID;
@property (copy, nonatomic) NSString *cardType;
@property (retain, nonatomic) IESLLifeURLModel *poiRankScoreIconURL;
@property (nonatomic) BOOL isMain;

+ (id)poiRankScoreIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, IESECLiveGoodsProductTagModel, IESECLiveGoodsListAuthorReputationScoreContent;

@interface IESECLiveGoodsListAuthorReputationModel : IESECCouponButtonModel

@property (nonatomic) unsigned long long showType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) float score;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) IESECLiveGoodsProductTagModel *shopTag;
@property (retain, nonatomic) IESECLiveGoodsListAuthorReputationScoreContent *scoreContent;

+ (id)JSONKeyPathsByPropertyKey;

- (id)scoreText;
- (id)levelText;
- (id)levelThemeScoreColor;
- (id)levelThemeTextColor;
- (id)levelThemeBackgroundColor;
- (void).cxx_destruct;
- (BOOL)hasScore;

@end

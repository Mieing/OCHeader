@class NSString, NSDictionary;

@interface AWEHotSearchChallengeInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *trendsStickerId;
@property (copy, nonatomic) NSDictionary *trendsMusicId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) BOOL isAIEffect;
@property (nonatomic) BOOL isImageTextTemplate;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

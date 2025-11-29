@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEHotSearchChallengeInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *participantNumber;
@property (copy, nonatomic) NSString *trendsStickerId;
@property (retain, nonatomic) NSNumber *trendsId;
@property (copy, nonatomic) NSDictionary *trendsMusicId;
@property (copy, nonatomic) NSArray *challengeItemDetails;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) BOOL isAIEffect;
@property (nonatomic) BOOL isImageTextTemplate;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

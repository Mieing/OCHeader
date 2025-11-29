@class NSString;

@interface AWEAwemeHotSearchTipModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *hotSearchTip;
@property (copy, nonatomic) NSString *hotSearchKeyword;
@property (copy, nonatomic) NSString *challengeID;
@property (nonatomic) long long hotValue;
@property (nonatomic) long long videoBillBoardRank;
@property (nonatomic) long long videoViewCountForToday;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) long long label;
@property (nonatomic) long long hotSpotRank;
@property (nonatomic) long long patternType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

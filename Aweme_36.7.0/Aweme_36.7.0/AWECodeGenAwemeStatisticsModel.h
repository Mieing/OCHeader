@class NSString;

@interface AWECodeGenAwemeStatisticsModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long diggCount;
@property (nonatomic) long long downloadCount;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long forwardCount;
@property (nonatomic) int loseCount;
@property (nonatomic) int loseCommentCount;
@property (nonatomic) long long whatsappShareCount;
@property (copy, nonatomic) NSString *digest;
@property (nonatomic) long long exposureCount;
@property (nonatomic) long long liveWatchCount;
@property (nonatomic) long long collectCount;
@property (nonatomic) long long admireCount;
@property (nonatomic) long long friendDiggCount;
@property (nonatomic) long long flameSendCount;
@property (copy, nonatomic) NSString *flameAmountSimpleStr;
@property (nonatomic) long long flameIncomeCount;
@property (copy, nonatomic) NSString *flameIncomeCountStr;
@property (nonatomic) long long mutualFriendCommentCount;
@property (nonatomic) long long mutualFriendDiggCount;
@property (nonatomic) long long recommendCount;
@property (nonatomic) long long pickCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSNumber;

@interface AWEAwemeStatisticsModel : AWEBaseApiModel

@property (readonly, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *commentCount;
@property (retain, nonatomic) NSNumber *originalCommentCount;
@property (nonatomic) BOOL isCommentCountWithAdComment;
@property (retain, nonatomic) NSNumber *diggCount;
@property (retain, nonatomic) NSNumber *favoriteCount;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *shareCount;
@property (retain, nonatomic) NSNumber *rewardCount;
@property (retain, nonatomic) NSNumber *friendDiggCount;
@property (retain, nonatomic) NSNumber *downLoadCount;
@property (retain, nonatomic) NSNumber *repostCount;
@property (retain, nonatomic) NSNumber *loseCount;
@property (retain, nonatomic) NSNumber *loseCommentCount;
@property (retain, nonatomic) NSNumber *recommendCount;
@property (copy, nonatomic) NSString *digest;
@property (copy, nonatomic) NSString *flameAmountSimpleStr;
@property (retain, nonatomic) NSNumber *flameSenderCount;
@property (retain, nonatomic) NSNumber *flameIncomeCount;
@property (copy, nonatomic) NSString *flameIncomeCountStr;
@property (retain, nonatomic) NSNumber *multualFriendCommentCount;
@property (retain, nonatomic) NSNumber *multualFriendDiggCount;
@property (retain, nonatomic) NSNumber *pickCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, NSNumber;

@interface AWEDemaciaAwemeStatisticsModel : AWEBaseApiModel

@property (readonly, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *commentCount;
@property (retain, nonatomic) NSNumber *diggCount;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *shareCount;
@property (retain, nonatomic) NSNumber *downLoadCount;
@property (retain, nonatomic) NSNumber *repostCount;
@property (retain, nonatomic) NSNumber *loseCount;
@property (retain, nonatomic) NSNumber *loseCommentCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

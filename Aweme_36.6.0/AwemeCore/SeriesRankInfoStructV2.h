@class NSString;

@interface SeriesRankInfoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *rankCardText;
@property (nonatomic) BOOL hasRankCardText;
@property (nonatomic) int rank;
@property (nonatomic) BOOL hasRank;
@property (copy, nonatomic) NSString *rankType;
@property (nonatomic) BOOL hasRankType;
@property (copy, nonatomic) NSString *rankSchema;
@property (nonatomic) BOOL hasRankSchema;

+ (id)descriptor;

@end

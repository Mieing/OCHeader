@class NSString, NSNumber;

@interface AWEMusicNewChartRankModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *rankId;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSNumber *rank;
@property (nonatomic) int heat;
@property (nonatomic) int rankTrend;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

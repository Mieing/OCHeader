@class NSString, NSNumber;

@interface AWEMusicChartRankModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *rankId;
@property (copy, nonatomic) NSString *desc;
@property (readonly, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSNumber *rank;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

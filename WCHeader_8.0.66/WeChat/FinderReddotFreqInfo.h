@class FinderReddotFreqConfig, NSMutableArray;

@interface FinderReddotFreqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *exposeInfos;
@property (retain, nonatomic) FinderReddotFreqConfig *finderReddotFreqConfig;
@property (nonatomic) unsigned int finderPageInPenaltyBusinessCount;
@property (retain, nonatomic) NSMutableArray *finderPageInPenaltyDetails;
@property (nonatomic) unsigned int finderPageBusinessCount;
@property (nonatomic) unsigned int finderPageHasReddotBusinessCount;
@property (nonatomic) unsigned int discoveryReddotType;
@property (retain, nonatomic) NSMutableArray *finderPageHasReddotBusinessNDetails;
@property (retain, nonatomic) NSMutableArray *xStrategyBusinessTypePriorities;
@property (retain, nonatomic) NSMutableArray *discoveryReddotPredictInfos;

+ (void)initialize;

- (void)setDiscoveryReddotPredictInfos:(id)a0;
- (id)discoveryReddotPredictInfos;
- (void)setXStrategyBusinessTypePriorities:(id)a0;
- (id)xStrategyBusinessTypePriorities;
- (void)setFinderPageHasReddotBusinessNDetails:(id)a0;
- (id)finderPageHasReddotBusinessNDetails;
- (void)setDiscoveryReddotType:(unsigned int)a0;
- (unsigned int)discoveryReddotType;
- (void)setFinderPageHasReddotBusinessCount:(unsigned int)a0;
- (unsigned int)finderPageHasReddotBusinessCount;
- (void)setFinderPageBusinessCount:(unsigned int)a0;
- (unsigned int)finderPageBusinessCount;
- (void)setFinderPageInPenaltyDetails:(id)a0;
- (id)finderPageInPenaltyDetails;
- (void)setFinderPageInPenaltyBusinessCount:(unsigned int)a0;
- (unsigned int)finderPageInPenaltyBusinessCount;
- (void)setFinderReddotFreqConfig:(id)a0;
- (id)finderReddotFreqConfig;
- (void)setExposeInfos:(id)a0;
- (id)exposeInfos;

@end

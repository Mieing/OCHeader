@class NSNumber, NSMutableDictionary, IESECGoodsDetailParameters, IESECGoodsFeedContext, IESECQualityInfoV2;

@interface IESECGoodsFeedQualityTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *fullMetricsSnapshot;
@property (retain, nonatomic) NSMutableDictionary *metricsSnapshot;
@property (weak, nonatomic) IESECGoodsDetailParameters *globalParameters;
@property (weak, nonatomic) IESECGoodsFeedContext *context;
@property (retain, nonatomic) IESECQualityInfoV2 *info;
@property (retain, nonatomic) NSNumber *viewdidloadTime;
@property (nonatomic) double requestStart;
@property (nonatomic) long long guessLikeStart;
@property (nonatomic) BOOL isFullPerfTracked;
@property (nonatomic) BOOL isFirstCardPerfTracked;
@property (nonatomic) BOOL isFirstCardRecord;

- (void)updateWithParams:(id)a0;
- (id)initWithGoodsDetailParameters:(id)a0;
- (void)trackWithType:(long long)a0;
- (void)firstCardRequestStart;
- (void)firstCardFetched;
- (void)firstRecommendListRequest;
- (void)firstRecommendListFetched;
- (void)firstRecommendListRenderStart;
- (void)old_willShowAtIndex:(long long)a0 viewModel:(id)a1;
- (void)p_reportFullRenderCompleteWithParams:(id)a0;
- (void)configMetricSnapshot;
- (void)p_reportFirstCardRenderCompleteWithParams:(id)a0;
- (void)willShowAtIndex:(long long)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (void)start;
- (void)viewDidLoad;

@end

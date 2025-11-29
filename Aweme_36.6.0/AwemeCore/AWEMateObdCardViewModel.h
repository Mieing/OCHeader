@class AWEUserRecommendBigCardDataSource, NSArray, AWEAwemeModel, AWEUserRecommendCardTrackManager;

@interface AWEMateObdCardViewModel : NSObject

@property (retain, nonatomic) AWEUserRecommendBigCardDataSource *dataSource;
@property (nonatomic) BOOL hasTrackedSkip;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) BOOL hasImpression;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (readonly, copy, nonatomic) NSArray *models;
@property (readonly, nonatomic) AWEUserRecommendCardTrackManager *tracker;

+ (id)textForObdCardSettings:(id)a0 defaultValue:(id)a1;

- (void)impressCurrentModel;
- (void)removeFromFeed;
- (void)p_mateReportRate:(long long)a0;
- (void)dislike:(BOOL)a0;
- (void)showObdList;
- (void)didRequestSuccess:(id)a0;
- (void)obdShowed:(id)a0;
- (void)trackObdCardWithAction:(id)a0 actionType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)skip;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;

@end

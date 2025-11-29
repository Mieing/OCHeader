@class NSArray, NSDictionary;

@interface IESECStoreSearchHotViewModel : NSObject

@property (copy, nonatomic) NSArray *hotArray;
@property (nonatomic) BOOL shouldShowRefreshButton;
@property (copy, nonatomic) NSArray *allHotArray;
@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double maximumHotCount;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)trackTrendingWordsClick:(id)a0;
- (void)trackTrendingWordsShow:(id)a0;
- (id)initWithTrackParams:(id)a0;
- (void)trackTrendingShow;
- (id)setupTrackParams:(id)a0;
- (void)p_updateAllHotArray:(id)a0;
- (void)fetchStoreSearchHotWithPenetrateParams:(id)a0;
- (void)updateStoreSearchHotArray:(id)a0;
- (void)refreshStoreSearchHot;
- (void).cxx_destruct;

@end

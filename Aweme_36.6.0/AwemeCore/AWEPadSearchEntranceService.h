@class NSString, UIView;
@protocol AWEHPDiscoverFeedEntranceViewProtocol, AWEPadSearchEntranceViewProtocol, AWESearchRecommendWordProtocol;

@interface AWEPadSearchEntranceService : HTSService <AWEPadSearchEntranceService, AWESearchrecommendWordUpdateObsever, AWEFeedThemeManagerProtocol>

@property (weak, nonatomic) UIView<AWEHPDiscoverFeedEntranceViewProtocol> *discoverEntranceView;
@property (retain, nonatomic) id<AWESearchRecommendWordProtocol> recommendWordManager;
@property (retain, nonatomic) UIView<AWEPadSearchEntranceViewProtocol> *padSearchEntranceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configAlpha:(double)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)themeDidChange:(long long)a0;
- (void)updateRelatedWord:(id)a0;
- (void)updateRecommendWord:(id)a0 awemeModel:(id)a1;
- (id)getSearchURLWithPageName:(id)a0 itemID:(id)a1 videoInfoExtra:(id)a2 clickIntoSearchTime:(unsigned long long)a3;
- (void)containerViewController:(id)a0 onDiscoverButtonClicked:(id)a1;
- (BOOL)setupDiscoverEntranceView:(id)a0;
- (BOOL)updateDiscoverEntranceViewFrame:(id)a0 withConstraintView:(id)a1 withContainerView:(id)a2;
- (BOOL)enableTopBarAdapterSmallBreakPoint;
- (void)fetchRecommendWordWithEnterFrom:(id)a0;
- (void)fetchRelatedWordWithGroupID:(id)a0 enterFrom:(id)a1;
- (void)trackEventTrendingWordShow:(id)a0 enterFromSecond:(id)a1 gid:(id)a2 wordSource:(id)a3;
- (void)trackEventTrendingWordClick:(id)a0 groupID:(id)a1 gid:(id)a2 wordSource:(id)a3;
- (void)fetchRecommWordWithGroupId:(id)a0 businessID:(id)a1 pd:(id)a2 categoryName:(id)a3 wordsSource:(id)a4 enterFrom:(id)a5 broadcast:(BOOL)a6 completion:(id /* block */)a7;
- (void)fetchRecommWordWithGroupId:(id)a0 businessID:(id)a1 pd:(id)a2 categoryName:(id)a3 wordsSource:(id)a4 query:(id)a5 query_id:(id)a6 enterFrom:(id)a7 broadcast:(BOOL)a8 completion:(id /* block */)a9;
- (void)fetchRecommWordByLastQueryWithBusinessID:(id)a0 pd:(id)a1 categoryName:(id)a2 wordsSource:(id)a3 enterFrom:(id)a4 broadcast:(BOOL)a5 completion:(id /* block */)a6;
- (BOOL)enableSearchEntranceOpt;
- (id)typeToReferString:(long long)a0;
- (id)trendingWordsFrom;
- (void)recommendWordDidChange:(id)a0 requestParams:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end

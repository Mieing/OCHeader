@class AWEDetailNewTrendListDataContext;

@interface AWEDetailNewTrendListTracker : NSObject

@property (retain, nonatomic) AWEDetailNewTrendListDataContext *dataContext;

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)trackDetailPageClientShowWithModel:(id)a0;
+ (id)tagCommonTrackParamsWithJsonString:(id)a0;
+ (id)trackerWithDataContext:(id)a0;
+ (void)trackEnterTrendDetail:(id)a0;
+ (void)trackMaterialsShowWithMusicModel:(id)a0 viewModel:(id)a1;
+ (void)trackMaterialsShowWithMaterialModel:(id)a0 viewModel:(id)a1;
+ (void)trackMaterialsClickWithMusicModel:(id)a0 viewModel:(id)a1;
+ (void)trackMaterialsClickWithMaterialModel:(id)a0 viewModel:(id)a1;
+ (void)trackFavouriteSongWithMusicModel:(id)a0 viewModel:(id)a1;
+ (void)trackCancelFavouriteSongWithMusicModel:(id)a0 viewModel:(id)a1;
+ (void)trackFavouritePropWithMaterialModel:(id)a0 viewModel:(id)a1;
+ (void)trackCancelFavouritePropWithMaterialModel:(id)a0 viewModel:(id)a1;
+ (void)trackFavouriteMVWithMaterialModel:(id)a0 viewModel:(id)a1;
+ (void)trackCancelFavouriteMVWithMaterialModel:(id)a0 viewModel:(id)a1;
+ (void)trendsPageMoreCardsShow:(id)a0 trendsId:(id)a1 rank:(long long)a2;
+ (void)trendsPageEnterMusicDetailWithMusicModel:(id)a0 viewModel:(id)a1;
+ (void)trendsPageEnterPropDetailWithMaterialModel:(id)a0 viewModel:(id)a1;
+ (void)trendsPageEnterMVDetailWithMaterialModel:(id)a0 viewModel:(id)a1;
+ (void)trackFeedEnterWithModel:(id)a0 index:(long long)a1 isMoreTrendStatus:(BOOL)a2 awemeModel:(id)a3;
+ (void)trackDuetButtonShowWithModel:(id)a0;
+ (void)trackDuetButtonClickWithModel:(id)a0;

- (void).cxx_destruct;

@end

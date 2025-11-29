@class UIView, NSString, AWESearchFilmTVLeadingCreatorView, AWEGeneralSearchModel, AWEGeneralFilmTVSourceModel, UIImageView, UIButton, AWESearchMediumCollectManager, UIViewController, AWEGeneralFilmTelevisionInfoModel, AWESearchFilmTVInfoView;
@protocol AWEAwemeDetailTableViewControllerProtocol, AWEModernFeedCellContext, AWESearchFilmTVEpisodesProtocol;

@interface AWEGeneralFilmTVInfoCellController : UIViewController <AWEAwemeDetailTableViewControllerDelegate, IESCommonVideoPlayerDelegate, AWEDemaciaPlayerViewDelegate, AWESearchFilmTVLeadingCreatorViewDelegate, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionInfoModel *filmTVInfoModel;
@property (retain, nonatomic) AWEGeneralFilmTVSourceModel *filmTVSourceModel;
@property (retain, nonatomic) NSString *refString;
@property (retain, nonatomic) NSString *keyWord;
@property (retain, nonatomic) AWESearchFilmTVInfoView *infoCardView;
@property (retain, nonatomic) UIView<AWESearchFilmTVEpisodesProtocol> *episodesView;
@property (retain, nonatomic) UIView *playerBgView;
@property (retain, nonatomic) AWESearchFilmTVLeadingCreatorView *leadingCreatorView;
@property (retain, nonatomic) UIImageView *movieLoadingView;
@property (retain, nonatomic) UIButton *playControl;
@property (retain, nonatomic) UIImageView *bannerView;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC;
@property (retain, nonatomic) AWESearchMediumCollectManager *collectMananger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun___LINE__;
+ (BOOL)showLeadingCreatorView:(id)a0;
+ (id)convertAwemeModel:(id)a0;

- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)resetContext:(id)a0;
- (void)updateWithReferString:(id)a0;
- (BOOL)isMediaSourceCard;
- (void)openEpisodePage:(id)a0;
- (void)openEpisodeSelectPage;
- (void)enterDetailPage;
- (void)clickBannerView;
- (void)trackLeadingCreatorViewExposure;
- (BOOL)showEpisodesView;
- (void)trackSearchResultShowEvent:(BOOL)a0;
- (void)preloadTimorWithModel:(id)a0;
- (void)trackVideoWithTrackType:(id)a0 isSubCard:(BOOL)a1 withModel:(id)a2;
- (void)toWatchWholeVideo;
- (BOOL)isHighLightVideo;
- (void)actionForHighLightVideoClicked;
- (void)actionForTrailerVideoClicked;
- (id)logFilmSourceModel;
- (void)trackVideoWithTrackType:(id)a0 logExtra:(id)a1;
- (void)trackVideoWithTrackType:(id)a0;
- (void)collectFilmTVContent;
- (id)longVideoLogExtra;
- (void)trackVideoWithTrackType:(id)a0 withModel:(id)a1;
- (void)trackVideoWithTrackType:(id)a0 isSubCard:(BOOL)a1 withModel:(id)a2 isExpose:(BOOL)a3;
- (void)trackLeadingCreatorViewClick:(id)a0;
- (void)buyTicket;
- (void)collectFilmTV:(id)a0;
- (void)openVideo;
- (void)selectVideoSource;
- (id)getBaseTrackParams;
- (void)trackVideoWithTrackType:(id)a0 isSubCard:(BOOL)a1 withModel:(id)a2 isExpose:(BOOL)a3 logExtra:(id)a4;
- (void)onLeadingCreatorViewClickWith:(id)a0;
- (void)didClickCoverVideo:(id)a0;
- (id)getVideoBaseTrackParamsWithAwemeModel:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;
- (id)fetchContext;

@end

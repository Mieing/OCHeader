@class AWERelatedVideoMixVideoPanelViewController, NSString, AWEAwemeModel, AWERVDetailPageContext, AWEListDataController, NSDictionary, AWEMixVideoModel, UIViewController, NSNumber;
@protocol AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWERelatedVideoMixVideoManager : NSObject <AWEMixVideoPanelViewDelegate>

@property (retain, nonatomic) AWERelatedVideoMixVideoPanelViewController *panelVC;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *subDataController;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) UIViewController *containerViewController;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mixDataControllerWithModel:(id)a0;

- (void)dismissPanelWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;
- (void)mixVideoDidTappedIndex:(long long)a0 aweme:(id)a1;
- (id)initWithModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void)updatePanelHeight;
- (void)gotoAlbumDetailWithAweme:(id)a0 fromNavigationController:(id)a1;
- (void)tryPreloadMixData;
- (void)syncLocalData:(id)a0;
- (id)nextMixVideo;
- (BOOL)panelVCShowing;
- (void)dismissPanelWithAnimation;
- (void)refreshPanelVC:(BOOL)a0;
- (long long)currentFetchedMaxEpisode;
- (long long)currentFetchedMinEpisode;
- (void)gotoMixDetailWithAweme:(id)a0 fromNavigationController:(id)a1;
- (void)updateLogExtraDictWith:(id)a0 videoPlayerVC:(id)a1;
- (id)currentMixList;
- (void).cxx_destruct;
- (void)setupUI;
- (void)showOnViewController:(id)a0;

@end

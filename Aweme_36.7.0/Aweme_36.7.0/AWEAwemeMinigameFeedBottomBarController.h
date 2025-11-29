@class NSString, NSDictionary, AWEAwemeModel, UIView, NSObject;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEAwemeMinigameFeedBottomBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIView *bottomBarView;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) AWEAwemeModel *miniGameCardModel;
@property (retain, nonatomic) NSString *miniGameUrl;
@property (nonatomic) BOOL hasInsertedCard;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSDictionary *serverDataGameInfo;
@property (copy, nonatomic) NSDictionary *serverDataCardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarWillShow;
- (void)bottomBarDidShow;
- (id)commonTrackParams;
- (id)ironManModuleService;
- (void)setupBottomBarView;
- (id)transferCardType:(long long)a0;
- (void)trackMpShowIfNeed;
- (void)trackMpClickIfNeed;
- (void)trackWithName:(id)a0 params:(id)a1;
- (id)gameManager;
- (void)updateServerData;
- (void)trackReleaseResultIfNeed;
- (BOOL)hasNoError;
- (void)onEnterGameButtonTapped:(id)a0;
- (void)showToast:(id)a0 duration:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)dealloc;
- (Class)contextClass;

@end

@class AWEFeedHotSearchMoreView, NSString, AWELiveHotPointPanelViewController, UIViewController, UINavigationController, UIView, AWEHotSearchManager;

@interface AWELiveHotPanelContainerViewController : UIViewController <AWEFeedHotSearchMoreViewDelegate, AWEHotPointPanelControllerDelegate, AWELiveHotPointPanelTableVCDelegate, AWEHotPanelContainerProtocol>

@property (retain, nonatomic) AWEFeedHotSearchMoreView *hotSearchMoreView;
@property (retain, nonatomic) AWEHotSearchManager *panelManager;
@property (retain, nonatomic) AWELiveHotPointPanelViewController *panelViewController;
@property (nonatomic) BOOL isHotPointPanelShow;
@property (nonatomic) BOOL isHotWordsTapped;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSString *trendEntryWord;
@property (copy, nonatomic) NSString *currentAwemeID;
@property (copy, nonatomic) id /* block */ innerDismissBlock;
@property (copy, nonatomic) id /* block */ beforeJumpBlock;
@property (nonatomic) BOOL cellEnableClick;
@property (weak, nonatomic) UIViewController *originController;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIView *bottomFillingView;
@property (retain, nonatomic) UIView *effectView;
@property (copy, nonatomic) NSString *currentRoomID;
@property (copy, nonatomic) NSString *currentWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (id)currentAwemeModel;
- (void)updateReferString:(id)a0;
- (id)currentHotSearchModel;
- (void)hotPointCardDidTapped:(id)a0 index:(long long)a1 isHotWordsTapped:(BOOL)a2 groupIds:(id)a3;
- (id)verticalBoardModel;
- (void)dismissPanelWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetPanelView;
- (id)risingHotSpotTitle;
- (long long)currentAwemeTypeForTrack;
- (id)getLogExtraDict;
- (BOOL)shouldTrackWordShow;
- (long long)currentHotFeedStyle;
- (void)updatePreviousPage:(id)a0;
- (void)selectSameHotSpotModel:(id)a0;
- (void)clickHotPointMoreView;
- (void)configurePanel;
- (void)requestData:(id /* block */)a0;
- (void)clickHotPointMoreView:(id)a0;
- (void)showPanelWithHotWord:(id)a0 completion:(id /* block */)a1;
- (void)showPanelWithHotWord:(id)a0 cellEnableClick:(BOOL)a1 beforeJumpBlock:(id /* block */)a2 completion:(id /* block */)a3 dismissBlock:(id /* block */)a4;
- (BOOL)isFromHotSpotFeed;
- (void)emptyPageButtonTapped:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

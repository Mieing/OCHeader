@class UIView, NSString, UIImageView, UIButton, UITableView, NSMutableSet, UILabel, IESLiveNativeAppShelfListModel;
@protocol IESLiveNativeAppShelfStatusDelegate;

@interface IESLiveNativeAppShelfStatusViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, IESLiveNativeAppShelfCardCellDelegate> {
    double _edgeViewHeight;
}

@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UIButton *manageButton;
@property (retain, nonatomic) UIButton *couponButton;
@property (retain, nonatomic) UIImageView *appIcon;
@property (retain, nonatomic) UILabel *appName;
@property (retain, nonatomic) UIImageView *coexistGuideImage;
@property (retain, nonatomic) UIButton *guideCloseButton;
@property (retain, nonatomic) UITableView *cardTableView;
@property (nonatomic) BOOL isPresenting;
@property (nonatomic) double beginShowTimeMS;
@property (retain, nonatomic) NSMutableSet *trackedCardIDs;
@property (retain, nonatomic) IESLiveNativeAppShelfListModel *listModel;
@property (weak, nonatomic) id<IESLiveNativeAppShelfStatusDelegate> delegate;
@property (copy, nonatomic) NSString *openSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)trackPageShow;
- (id)commonTrackParams;
- (void)trackStayTime;
- (id)shelfInfo;
- (void)trackBubble:(id)a0 showWithShelfInfo:(id)a1;
- (void)updateWithShelfInfo:(id)a0;
- (void)blankAreaDidClick:(id)a0;
- (void)updateWithTradeData:(id)a0;
- (void)cell:(id)a0 didUpdateExplainStatus:(BOOL)a1;
- (BOOL)enableShowTradeData;
- (BOOL)checkPageAppear;
- (void)couponButtonDidClick;
- (void)tryToShowImportantCardBubble;
- (void)iconOrTitleDidClick:(id)a0;
- (void)updateCouponButtonState;
- (void)updateUIForAB;
- (void)trackShowStatusView;
- (void)trackCoexistGuideShow;
- (void)trackCoexistGuideClick;
- (void)trackCardShow:(id)a0;
- (void)manageButtonDidClick:(id)a0;
- (void)guideCloseButtonDidClick:(id)a0;
- (void)updateWithCouponHidden:(BOOL)a0 source:(id)a1;
- (void)close;
- (void)updateStyle;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setUpUI;

@end

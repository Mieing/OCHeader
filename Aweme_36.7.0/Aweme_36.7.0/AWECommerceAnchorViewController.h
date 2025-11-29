@class DUXTip, UIView, NSArray, NSString, CAShapeLayer, UIButton, UITableView, NSMutableSet, NSDictionary, UILabel;

@interface AWECommerceAnchorViewController : AWECommerceAnchorTransitionViewController <UITableViewDelegate, UITableViewDataSource, AWECommerceAnchorDismissActionProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITableView *anchorTableView;
@property (retain, nonatomic) CAShapeLayer *contentShapeLayer;
@property (retain, nonatomic) UIButton *checkQuestionButton;
@property (retain, nonatomic) DUXTip *tipsView;
@property (readonly, nonatomic) NSArray *publishAnchorArray;
@property (readonly, nonatomic) NSArray *externalAnchorArray;
@property (readonly, nonatomic) NSArray *sections;
@property (copy, nonatomic) id /* block */ disAppearBlock;
@property (retain, nonatomic) NSMutableSet *showedIndexPath;
@property (nonatomic) BOOL hasTrackPageAppear;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) BOOL isShowServerAnchorList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)btm_pageIdentifier;

- (void)trackPageShow;
- (void)closeButtonClicked:(id)a0;
- (void)actionWhenAnchorViewControllerDidDisAppear:(id /* block */)a0;
- (id)animationViewInTransition;
- (double)offsetYInTransition;
- (BOOL)needInteractiveTransition;
- (void)trackPageAppear;
- (void)checkQuestionButtonClicked:(id)a0;
- (void)tipsLinkClicked;
- (void)trackAnchorClickWithType:(long long)a0 params:(id)a1;
- (void)trackIronManShow;
- (void)trackAnchorShowWithType:(long long)a0 params:(id)a1;
- (id)getAnchorTypeList;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)maskColor;
- (void)buildView;

@end

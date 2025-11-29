@class AWEAwemeDetailFixedButtonManager, NSString, UIView;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEAwemeDetailBottomBarLayoutManager : NSObject <AWEAwemeDetailBottomBarLayoutManagerProtocol>

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *aboveSubview;
@property (nonatomic) long long layoutType;
@property (nonatomic) BOOL hasSetupContainers;
@property (weak, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (retain, nonatomic) UIView *businessBarContainerView;
@property (retain, nonatomic) UIView *fixedButtonBackgroundView;
@property (retain, nonatomic) UIView *fixedButtonContainerView;
@property (retain, nonatomic) UIView *splitLineView;
@property (retain, nonatomic) AWEAwemeDetailFixedButtonManager *fixedButtonManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupLayoutWithContainerView:(id)a0 aboveSubview:(id)a1;
- (void)updateLayoutForBottomBar:(id)a0 awemeModel:(id)a1 referString:(id)a2 context:(id)a3;
- (void)addBottomBarView:(id)a0 withController:(id)a1;
- (id)fixedButtonFeedAllowList;
- (id)viewForBottomBar;
- (long long)layoutTypeForReferString:(id)a0 awemeModel:(id)a1 bottomBarController:(id)a2;
- (void)setLayoutType:(long long)a0 animated:(BOOL)a1;
- (void)updateFixedButtonBackgroundColorForController:(id)a0;
- (void)ensureContainersSetup;
- (void)updateContainersLayout;
- (id)backgroundColorForControllerClassName:(id)a0;
- (void)createSubContainers;
- (void)handleFixedButtonBackgroundViewTap:(id)a0;
- (void)updateLayoutForBottomBar:(id)a0 awemeModel:(id)a1 referString:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end

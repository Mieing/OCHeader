@class AWEAwemeModel, AWESearchVideoCardPanelViewController, NSArray, AWESearchCommonAbstractModel, NSString, AWESearchSlidingViewController, NSDictionary, AWESlidingTabbarView;
@protocol AWESearchCommonAbstractProtocol;

@interface AWESearchCommonAbstractViewController : UIViewController <AWESlidingViewControllerDelegate, AWESearchCommonAbstractPanelProtocol>

@property (nonatomic) long long containerWidth;
@property (retain, nonatomic) AWESearchSlidingViewController *slidingViewController;
@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESearchCommonAbstractModel *abstractModel;
@property (nonatomic) long long initialTabIndex;
@property (copy, nonatomic) NSArray *tabArray;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSDictionary *logParamDict;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double currentPlayTime;
@property (retain, nonatomic) AWESearchVideoCardPanelViewController *viewController;
@property (weak, nonatomic) id<AWESearchCommonAbstractProtocol> delegate;
@property (copy, nonatomic) id /* block */ jumpTimeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)switchToTab:(id)a0;
- (id)initWithContainerWidth:(long long)a0;
- (void)updateWithDict:(id)a0 completion:(id /* block */)a1;
- (void)updateWithCommonAbstractModel:(id)a0 completion:(id /* block */)a1;
- (void)updateSubUI;
- (void)trackWhenShowWithTrackLogData:(id)a0;
- (void)updatePanelAnchorIfNeeded;
- (long long)currentChapterIndexWithDict:(id)a0;
- (void)trackPanelClickWithLogData:(id)a0 clickType:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

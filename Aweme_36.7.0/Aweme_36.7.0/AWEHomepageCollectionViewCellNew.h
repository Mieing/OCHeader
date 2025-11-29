@class NSString, NSDictionary, AWEAdWebViewController, UIScrollView, AWEAwemeModel, UIViewController;
@protocol BDXContainerProtocol;

@interface AWEHomepageCollectionViewCellNew : UICollectionViewCell

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSDictionary *queryDict;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) unsigned long long profileTabStyle;
@property (nonatomic) BOOL fromHome;
@property (retain, nonatomic) AWEAdWebViewController *webViewController;
@property (retain, nonatomic) UIScrollView *currentScrollView;
@property (nonatomic) double scrollViewHeight;
@property (nonatomic) double headerHeight;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isUseNewBulletContainer;
@property (retain, nonatomic) UIViewController<BDXContainerProtocol> *containerVC;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) id /* block */ childViewControllerCompleteBlock;
@property (nonatomic) double monitorStartTime;
@property (copy, nonatomic) NSString *reactID;
@property (nonatomic) BOOL isPadSplitScreen;

+ (id)identifier;

- (void)configWithUserID:(id)a0 scheme:(id)a1 model:(id)a2 headerHeight:(double)a3 queryDict:(id)a4 globalProps:(id)a5 profileTabStyle:(unsigned long long)a6 isPadSplitScreen:(BOOL)a7;
- (BOOL)p_configLynxViewController;
- (void)p_configWebViewControllerWithTabHeight:(double)a0;
- (void)disableWebviewScroll;
- (id)configSchemaAddExtraParamsWithSourceSchema:(id)a0;
- (void)disableScrollingOfSubviews:(id)a0;
- (void)configWithUserID:(id)a0 scheme:(id)a1 model:(id)a2 headerHeight:(double)a3 queryDict:(id)a4 globalProps:(id)a5 profileTabStyle:(unsigned long long)a6;
- (void)postStartScrollNotificationWithDragging:(BOOL)a0;
- (void).cxx_destruct;
- (id)fallbackURL;
- (void)dealloc;

@end

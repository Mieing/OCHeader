@class NSString, UIImageView, AWEAwemeModel, UIView, UILabel, UIViewController;

@interface AWEAdFeedLandingPageUpgradeHelper : NSObject <AWEAdFeedLandingPageUpgradeHelper>

@property (weak, nonatomic) UIViewController *landingPage;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView *domainNameView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UILabel *requestURLLabel;
@property (nonatomic) double lastNaviBarHeight;
@property (nonatomic) double panStartNaviBarHeight;
@property (nonatomic) double defaultMaxHeight;
@property (nonatomic) double defaultMinHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adFeedLandingPageUpgradeHelperWithAdFeedLandingPage:(id)a0 AwemeModel:(id)a1;

- (id)initWithAdFeedLandingPage:(id)a0 AwemeModel:(id)a1;
- (void)setupAweNavibarConstrains;
- (void)addDomainName:(id)a0;
- (void)associateNavibarWithScrollViews:(id)a0 isWebView:(BOOL)a1;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;

@end

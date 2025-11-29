@class NSString;
@protocol AWEFeedTableViewControllerProtocol;

@interface AWEAwesomeSplashBaseManager : HTSService <AWEFeedTableViewControllerMessage>

@property (nonatomic) BOOL isBackground;
@property (nonatomic) long long feedModeType;
@property (nonatomic) struct CGPoint { double x; double y; } clickPoint;
@property (weak, nonatomic) id<AWEFeedTableViewControllerProtocol> tableVC;
@property (nonatomic) double feedAppearTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)skipAwesomeSplash:(id)a0;
- (void)clickOutsideConversionButton:(id)a0 extra:(id)a1;
- (void)showAwesomeSplash;
- (void)viewControllerAppear:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)dealloc;

@end

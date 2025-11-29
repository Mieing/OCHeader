@class AWECityModel, NSDictionary, AWEAwemeModel, UIView, UIViewController;
@protocol AWERouterViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEXTabChildViewControllerProtocol, AWENearbyContainerChildProtocol, AWENewNearbyViewControllerProtocol, AWENearbySubPageUndertakeProtocol, AWEViewControllerProtocol;

@interface AWENearbySwitchContext : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL firstSwitch;
@property (nonatomic) BOOL needRefresh;
@property (nonatomic) BOOL needStoreSwitchChannel;
@property (nonatomic) long long forceFeedType;
@property (nonatomic) long long searchType;
@property (nonatomic) unsigned long long switchScene;
@property (retain, nonatomic) AWEAwemeModel *awemeForInsert;
@property (retain, nonatomic) AWECityModel *currentCity;
@property (retain, nonatomic) NSDictionary *contextParams;
@property (weak, nonatomic) UIView *nextView;
@property (weak, nonatomic) UIView *oldView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomRect;
@property (weak, nonatomic) UIViewController<AWERouterViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWENewNearbyViewControllerProtocol, AWEViewControllerProtocol, AWEXTabChildViewControllerProtocol, AWENearbyContainerChildProtocol, AWENearbySubPageUndertakeProtocol> *nextViewController;
@property (weak, nonatomic) UIViewController<AWERouterViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWENewNearbyViewControllerProtocol, AWEViewControllerProtocol, AWEXTabChildViewControllerProtocol, AWENearbyContainerChildProtocol, AWENearbySubPageUndertakeProtocol> *oldViewController;

- (void).cxx_destruct;

@end

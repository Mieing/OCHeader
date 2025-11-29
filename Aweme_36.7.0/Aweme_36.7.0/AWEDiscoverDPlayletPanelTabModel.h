@class NSString, UIViewController, DUXTabBarTextItem;

@interface AWEDiscoverDPlayletPanelTabModel : NSObject

@property (retain, nonatomic) NSString *tabName;
@property (weak, nonatomic) UIViewController *subController;
@property (nonatomic) long long tabIndex;
@property (retain, nonatomic) DUXTabBarTextItem *tabTextItem;
@property (retain, nonatomic) NSString *trackerTabName;

- (void).cxx_destruct;

@end

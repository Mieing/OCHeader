@class UIView, UIViewController, AWEFeedTopBarContainer;
@protocol AWEHPHomeContainerViewControllerProtocol;

@interface AWEHPTopBarBaseEntranceItem : NSObject

@property (weak, nonatomic) UIViewController<AWEHPHomeContainerViewControllerProtocol> *containerVC;
@property (weak, nonatomic) AWEFeedTopBarContainer *topBarContainer;
@property (weak, nonatomic) UIView *feedContentView;

- (void).cxx_destruct;

@end

@class NSString, UIViewController, UIView;
@protocol WCFinderTabViewProtocol;

@interface WCFinderTabPageModel : NSObject

@property (retain, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSString *tabTitleName;
@property (copy, nonatomic) NSString *selectTabTitleName;
@property (copy, nonatomic) NSString *unselectTabTitleName;
@property (copy, nonatomic) NSString *bindRedDotPath;
@property (retain, nonatomic) UIView<WCFinderTabViewProtocol> *tabView;
@property (nonatomic) BOOL preLoadWhileScrolling;
@property (nonatomic) BOOL tabViewNotBindRedDotPath;
@property (copy, nonatomic) NSString *accessibilityLabel;

- (id)init;
- (BOOL)useSelectedAndUnSelectedTitle;
- (void).cxx_destruct;

@end

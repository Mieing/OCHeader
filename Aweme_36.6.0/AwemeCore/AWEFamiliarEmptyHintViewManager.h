@class NSString, UIViewController, AWEFamiliarEmptyHintViewController;
@protocol AWEFindFriendsViewControllerProtocol;

@interface AWEFamiliarEmptyHintViewManager : NSObject <AWEFamiliarEmptyHintViewManagerProtocol>

@property (retain, nonatomic) UIViewController *familiarEmptyViewController;
@property (retain, nonatomic) AWEFamiliarEmptyHintViewController *familiarEmptyViewControllerOld;
@property (nonatomic) BOOL hasViewLoaded;
@property (retain, nonatomic) UIViewController<AWEFindFriendsViewControllerProtocol> *findViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)refreshStateOfFamiliarEmptyHintViewController;
- (void)updateFamiliarEmptyHintViewControllerWith:(BOOL)a0 dataController:(id)a1 parentVC:(id)a2;
- (BOOL)refreshStateOfFamiliarEmptyHintViewControllerWith:(BOOL)a0;
- (void)removeFamiliarEmptyHintViewController;
- (void)addFamiliarEmptyHintViewControllerToParentViewController:(id)a0;
- (void).cxx_destruct;

@end

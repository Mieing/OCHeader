@class NSArray;
@protocol QuickCallRemoveViewControllerDelegate;

@interface QuickCallRemoveViewController : SelectSubContactViewController

@property (retain, nonatomic) NSArray *contacts;
@property (weak, nonatomic) id<QuickCallRemoveViewControllerDelegate> removeDelegate;

- (id)initWithContacts:(id)a0 delegate:(id)a1;
- (void)viewDidLoad;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (id)viewControllerTitle;
- (long long)numberOfSessions;
- (id)contactAtIndex:(long long)a0;
- (void)onSelectedContactsChange;
- (void)onDone:(id)a0;
- (void).cxx_destruct;

@end

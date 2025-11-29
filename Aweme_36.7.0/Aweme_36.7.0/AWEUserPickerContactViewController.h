@class NSString, AWEUserContactListViewController;
@protocol AWEUserPickerViewControllerDelegate;

@interface AWEUserPickerContactViewController : UIViewController <AWEUserPickerViewControllerProtocol>

@property (retain, nonatomic) AWEUserContactListViewController *contactListController;
@property (weak, nonatomic) id<AWEUserPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *refer;
@property (retain, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked;
- (void)buildNavigationHeader;
- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end

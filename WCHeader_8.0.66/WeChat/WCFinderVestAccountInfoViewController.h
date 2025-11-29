@class UIScrollView, FinderNewUserPrepareResponse, WCFinderContact;

@interface WCFinderVestAccountInfoViewController : MMUIViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse;
@property (retain, nonatomic) WCFinderContact *contact;

- (void)viewDidLoad;
- (void)requestUserPrepare;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)clickCloseAction;
- (void).cxx_destruct;

@end

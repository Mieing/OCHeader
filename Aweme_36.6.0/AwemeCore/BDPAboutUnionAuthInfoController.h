@class NSDictionary;

@interface BDPAboutUnionAuthInfoController : BDPBusinessXScreenViewController

@property (retain, nonatomic) NSDictionary *unionAuthInfoParams;

- (id)initWithUniqueID:(id)a0 params:(id)a1;
- (BOOL)XScreenWindowShouldShowCustomButton:(id)a0;
- (BOOL)XScreenWindowShouldShowLeftCustomButton:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)updateNavigationTitle;

@end

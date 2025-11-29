@class NSMutableArray;

@interface SelectWWKFSubContactViewController : SelectSubContactViewController

@property (retain, nonatomic) NSMutableArray *contacts;

- (void)viewDidLoad;
- (id)viewControllerTitle;
- (long long)numberOfSessions;
- (id)contactAtIndex:(long long)a0;
- (void).cxx_destruct;

@end

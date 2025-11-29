@class UITableView, NSArray, NSString, UIView, UITapGestureRecognizer;

@interface CSJDislikeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSArray *filterWords;
@property (copy, nonatomic) NSArray *topFilterWords;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITapGestureRecognizer *cancelTapGesture;
@property (retain, nonatomic) UIView *backgorundView;
@property (nonatomic) long long showType;
@property (copy, nonatomic) id /* block */ dislikeResult;
@property (copy, nonatomic) id /* block */ cancel;
@property (nonatomic) long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initViewControllerWithReasons:(id)a0;
- (void)layoutTableView;
- (void)closeViewController;
- (void)pushSecondView:(id)a0;
- (void)buildupView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)shouldAutorotate;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)backgroundTapped:(id)a0;

@end

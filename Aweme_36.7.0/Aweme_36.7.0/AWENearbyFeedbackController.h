@class NSArray, AWENearbyFeedbackTopBar, NSString, UITableView;
@protocol AWENearbyFeedbackControllerDelegate;

@interface AWENearbyFeedbackController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) AWENearbyFeedbackTopBar *topBar;
@property (weak, nonatomic) id<AWENearbyFeedbackControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedbackWithTitle:(id)a0 items:(id)a1;

- (void)configViews;
- (void)borderForView:(id)a0;
- (void)setSectionCornreRadiusAndLines:(id)a0 forRowAtIndexPath:(id)a1;
- (void)configTopBar;
- (void)onTapRightButton:(id)a0;
- (void)showDetailWithItem:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;

@end

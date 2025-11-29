@class NSArray, NSString, NSMutableSet, UITableView;

@interface AWEIMOnlineFriendsViewController : AWEHalfScreenBaseViewController <UITableViewDelegate, UITableViewDataSource, AWEIMOnlineFriendsTableViewCellDelegate>

@property (copy, nonatomic) NSArray *users;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableSet *didClickUsers;
@property (copy, nonatomic) NSString *trackEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showing;

- (void)setPureMode:(BOOL)a0;
- (BOOL)didClickGreetWithUser:(id)a0;
- (void)clickGreetWithUser:(id)a0;
- (void)clickVoiceWithUser:(id)a0;
- (void)clickCellContentWithUser:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithUsers:(id)a0;

@end

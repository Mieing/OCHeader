@class NSArray;

@interface SettingTingAudioChatTimbreViewController : SettingBaseViewController

@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSArray *availableRoles;
@property (copy, nonatomic) id /* block */ onDoneBlock;

- (id)musicChatService;
- (void)viewDidLoad;
- (void)cancel;
- (void)save;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

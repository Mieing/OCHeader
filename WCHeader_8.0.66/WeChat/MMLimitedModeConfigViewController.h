@class UITableView, NSArray, UIImageView, NSString, RichTextView, MMUILabel;

@interface MMLimitedModeConfigViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMLimitedModeExt>

@property (nonatomic) long long bizType;
@property (nonatomic) long long scene;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *sectionDatas;
@property (retain, nonatomic) NSString *ticket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBizType:(long long)a0 scene:(long long)a1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)reloadContent;
- (void)initUI;
- (void)setupLayout;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)a0 bizType:(long long)a1;
- (void)onChangeLimitedModeFail;
- (void)jumpToBizFollowViewController;
- (id)descText;
- (id)extraDescText;
- (id)subTitleText;
- (void).cxx_destruct;

@end

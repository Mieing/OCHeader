@class NSString, NSArray, MMHeadImageView, ChatBotVoIPAIMemberInfo, MMUIView, NSMutableArray, MMUILabel, MMUIButton, MMTableView;

@interface ChatBotSettingViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IChatBotAvatarUpdateExt>

@property (retain, nonatomic) MMUIButton *backButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *dataPermissionTitleLabel;
@property (retain, nonatomic) MMTableView *dataPermissionTableView;
@property (retain, nonatomic) MMHeadImageView *avatarCellView;
@property (retain, nonatomic) MMUIView *avatarEntranceCellView;
@property (retain, nonatomic) NSMutableArray *dataPermission;
@property (retain, nonatomic) NSArray *dataPermissionWording;
@property (retain, nonatomic) ChatBotVoIPAIMemberInfo *memberInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMemberInfo:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)switchValueChanged:(id)a0;
- (void)close;
- (void)openSelectHeadImagePage:(id)a0;
- (void)onUpdateAvatar:(id)a0;
- (void).cxx_destruct;

@end

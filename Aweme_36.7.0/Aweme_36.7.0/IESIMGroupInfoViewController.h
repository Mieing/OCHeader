@class InfoItemView, UIImageView, IESIMGroupInfoViewModel, NSString, UIButton;

@interface IESIMGroupInfoViewController : UIViewController <IESIMGroupAvatarFakeWriteImageMessageProtocol>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIButton *avatarChangeButton;
@property (retain, nonatomic) InfoItemView *groupNameItemView;
@property (retain, nonatomic) InfoItemView *groupDescItemView;
@property (retain, nonatomic) IESIMGroupInfoViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked:(id)a0;
- (void)bindViewModel;
- (void)p_setupNavigationBar;
- (id)initWithConversation:(id)a0 hideDecription:(BOOL)a1 title:(id)a2;
- (void)didPickAvatarWithConversationID:(id)a0 pickedImage:(id)a1;
- (void)finishUploadAvatarWithConversationID:(id)a0 fakeWriteResultStatus:(BOOL)a1;
- (void)clickChangeAvatarBtn:(id)a0;
- (void)clickAvatarView;
- (void)groupNameItemContentClicked:(id)a0;
- (void)groupDescItemContentClicked:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (id)initWithConversation:(id)a0;

@end

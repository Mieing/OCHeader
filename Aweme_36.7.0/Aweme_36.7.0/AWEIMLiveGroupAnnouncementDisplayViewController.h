@class AWEIMGroupNoticeDisplayViewView, AWEIMMessageConversation, AWEIMLiveGroupAnnouncementDisplayViewModel, DUXButton;

@interface AWEIMLiveGroupAnnouncementDisplayViewController : UIViewController

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMGroupNoticeDisplayViewView *displayView;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementDisplayViewModel *viewModel;
@property (retain, nonatomic) DUXButton *subscribeBtn;

- (void)backbuttonClicked:(id)a0;
- (id)initWithConversation:(id)a0 liveGroupAnnoucementInfo:(id)a1;
- (void)configBtnWithSubscribeStatus:(unsigned long long)a0;
- (void)__didClickOnSubscribe;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

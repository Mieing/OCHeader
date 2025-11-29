@class AWEIMGroupNoticeDisplayViewView, AWEIMMessageConversation, UIViewController, UIScrollView, AWEIMGroupNoticeDisplayViewModel, UIView;

@interface AWEIMGroupNoticeDisplayViewController : UIViewController

@property (retain, nonatomic) AWEIMGroupNoticeDisplayViewModel *viewModel;
@property (retain, nonatomic) AWEIMGroupNoticeDisplayViewView *noticeDisplayView;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long role;
@property (retain, nonatomic) UIScrollView *scrollContainer;
@property (nonatomic) BOOL noticeScrollable;
@property (retain, nonatomic) UIView *tipRegion;
@property (weak, nonatomic) UIViewController *groupSettingVC;
@property (nonatomic) BOOL shownInHalfScreen;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backbuttonClicked:(id)a0;
- (BOOL)isGroupMaster;
- (void)editButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithConversation:(id)a0;

@end

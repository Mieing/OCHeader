@class AWEIMChatThemeModel, NSString, AWEIMSwitchCFBubbleColorSingleView, UILabel, AWEIMHalfScreenContainerViewController, UIButton;
@protocol IESIMConversationProtocol;

@interface AWEIMSwitchCFBubbleColorViewController : UIViewController <AWEIMHalfScreenContainerVCDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMSwitchCFBubbleColorSingleView *leftSelectView;
@property (retain, nonatomic) AWEIMSwitchCFBubbleColorSingleView *rightSelectView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL currentSelectLeft;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isCloseFriendEnableModify;
@property (copy, nonatomic) NSString *selectColorIdentifier;
@property (retain, nonatomic) AWEIMChatThemeModel *chatThemeModel;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (double)externalAssignTopDragHeight;
- (void)didTapConfirmButton:(id)a0;
- (void)p_setupBind;
- (void)p_trackVCShow;
- (void)handleSingleTapGes:(id)a0;
- (void)p_trackVCClickStatus:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;

@end

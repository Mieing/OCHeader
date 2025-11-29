@class AWEStudioRepoIMModel, AWEBubble, DUXPopover, NSString, ACCButton, UIButton;
@protocol AWEIMEditorSendViewDelegate;

@interface AWEIMEditorSendView : UIView <AWEIMEditorSendViewProtocol>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long function;
@property (retain, nonatomic) UIButton *smallBtn;
@property (retain, nonatomic) ACCButton *functionButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) AWEStudioRepoIMModel *imModel;
@property (retain, nonatomic) AWEBubble *syncToFriendsBubble;
@property (retain, nonatomic) DUXPopover *syncToFriendsPopover;
@property (weak, nonatomic) id<AWEIMEditorSendViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 type:(unsigned long long)a1;
- (void)removeBubble;
- (void)notifyDelegateWithClickType:(unsigned long long)a0;
- (id)completeButtonTitle;
- (void)showWatchOnceGuideIfNeed:(id)a0 containerView:(id)a1;
- (void)showSyncToFriendsBubble;
- (void)setActionButtonLoadingState:(BOOL)a0;
- (void)setupSubviewsByFunc;
- (id)p_buttonBackgroundColor;
- (id)p_buttonTextColor;
- (id)p_buttonTitle;
- (id)p_buttonImageName;
- (void)clickedLeftButton;
- (id)getGuideAnchorView;
- (id)newStyleV1SendTotherFriendsButton;
- (id)sendToCurrentFriendButtonTitle;
- (void)clickedRightButton;
- (id)newStyleRedBackgroundButtonWithTitle:(id)a0 touchUpInsideSelector:(SEL)a1;
- (void)clickedCompleteButton;
- (id)completeRedBackgroundButtonWithTitle:(id)a0 touchUpInsideSelector:(SEL)a1;
- (void)clickedSmallBtn;
- (id)initWithModel:(id)a0 function:(unsigned long long)a1;
- (id)__effectSettings;
- (void).cxx_destruct;
- (void)registerNotifications;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)setupSubviews;

@end

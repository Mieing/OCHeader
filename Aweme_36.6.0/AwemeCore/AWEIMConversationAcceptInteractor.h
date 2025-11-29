@class NSArray, NSString, AWEIMAcceptConversationView, UIView;
@protocol IESIMConversationProtocol;

@interface AWEIMConversationAcceptInteractor : AWEIMComponentBase <AWEIMAcceptConversationViewDelegate, AWEIMConversationAcceptInteractorInterface>

@property (retain, nonatomic) AWEIMAcceptConversationView *acceptView;
@property (copy, nonatomic) NSArray *menuItems;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isHandlingAccept;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isSelfCreateStrangerCon:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)messageDataController;
- (id)vcParent;
- (id)p_processLimitString:(id)a0 second:(id)a1 withLimit:(double)a2 attributes:(id)a3 maxNumOfLines:(long long)a4;
- (BOOL)isConversationUnAcceptd;
- (BOOL)shouldShowAcceptView;
- (void)showAcceptViewIfNeed;
- (void)hideAcceptViewIfNeed;
- (void)acceptCurrentConversationWithCompletion:(id /* block */)a0;
- (id)acceptViewTitle:(id)a0;
- (id)acceptViewMenuTitles:(id)a0;
- (id)acceptViewMenuHighlited:(id)a0;
- (void)acceptView:(id)a0 didClickMenuAtIndex:(long long)a1;
- (BOOL)p_isConversationUnAccepted;
- (void)p_configMenuItems;
- (void)p_didAcceptConversation;
- (BOOL)p_isGrabageConversation;
- (void)restoreConversationAccept;
- (void).cxx_destruct;
- (id)conversation;

@end

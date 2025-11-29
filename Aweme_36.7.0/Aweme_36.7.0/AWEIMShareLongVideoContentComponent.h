@class NSString;

@interface AWEIMShareLongVideoContentComponent : AWEIMFlexComponent <AWEIMFoldMessageAssistanceButtonClickAction, AWEIMMessageContentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)p_tapCoverAction:(id)a0 context:(id)a1 displayViewModel:(id)a2;
+ (void)trackEcomFeedCardMsgClick:(id)a0 displayViewModel:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)didClickAssistanceButton:(long long)a0;
- (id)displayViewModel;
- (void)p_didClickCover:(id)a0;
- (void)p_tapCoverAction;
- (id)displayMessage;

@end

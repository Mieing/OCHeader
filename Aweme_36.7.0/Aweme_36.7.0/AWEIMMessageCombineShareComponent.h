@class AWEIMMessageBaseViewController, NSString;
@protocol AWEIMMessageDataProtocol;

@interface AWEIMMessageCombineShareComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (weak, nonatomic) id<AWEIMMessageDataProtocol> messageDataController;
@property (weak, nonatomic) AWEIMMessageBaseViewController *messageBaseViewController;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_updateProps;
- (void)p_addObserve;
- (void)didTapCoverAction;
- (void)p_trackGroupChatScreenWithEvent:(id)a0;
- (id)p_getTitleAttributeStringWithText:(id)a0;
- (id)p_getContentAttributeStringWithText:(id)a0;
- (id)p_getMsgCountAttributeStringWithCount:(long long)a0;
- (void)p_reportMessageAction:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;

@end

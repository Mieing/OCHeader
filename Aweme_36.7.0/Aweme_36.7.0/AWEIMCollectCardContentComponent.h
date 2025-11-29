@class AWEIMMessageConversation, NSString, AWEIMCollectCardMessage, AWEIMComponentManager;

@interface AWEIMCollectCardContentComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageContentInterface>

@property (readonly, nonatomic) AWEIMCollectCardMessage *collectCardMsg;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly, nonatomic) NSString *conversationID;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)__createPresenter;
- (void)__trackCardClick;
- (id)__cardTypeForTrack;
- (void)__trackCardShow;
- (void)__setupMsgStatusUpdateBlock;
- (void)__updatePropsWithStatus:(unsigned long long)a0;
- (void)__didTapCell;
- (id)__chatTypeForTrack;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;

@end

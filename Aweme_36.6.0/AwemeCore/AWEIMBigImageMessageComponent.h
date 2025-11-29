@class AWEIMMessageConversation, NSString, AWEIMBigImageMessage, NSDate;

@interface AWEIMBigImageMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMBigImageMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSDate *startLoadTimeDate;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)bubbleViewTapped:(id)a0;
- (void)p_addKVO;
- (BOOL)isOpenedTimor;
- (void)openActiveRouterOrSafeWebLink;
- (BOOL)unSupportMessageForDLite:(id)a0;
- (BOOL)p_isLegalActiveUrl:(id)a0;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void).cxx_destruct;
- (id)displayMessage;

@end

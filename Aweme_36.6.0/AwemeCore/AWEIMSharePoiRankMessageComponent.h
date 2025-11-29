@class NSString, AWEIMMessageConversation, AWEIMSharePoiRankMessage;

@interface AWEIMSharePoiRankMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMSharePoiRankMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
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
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)bodyTapped:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)displayMessage;

@end

@class AWEIMShareGoodsListMessage, AWEIMMessageConversation, NSString;

@interface AWEIMShareGoodsListMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMShareGoodsListMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (id)p_bgColor;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)displayMessage;

@end

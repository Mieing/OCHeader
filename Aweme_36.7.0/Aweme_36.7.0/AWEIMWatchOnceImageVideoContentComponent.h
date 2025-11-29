@class AWEIMMessage, AWEIMMessageConversation, NSString;
@protocol AWEIMWatchOnceMessageProtocol;

@interface AWEIMWatchOnceImageVideoContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMMessage<AWEIMWatchOnceMessageProtocol> *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (id)fetchQuotedMessageInvisibleStr:(id)a0 isLite:(BOOL)a1 context:(id)a2;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)onTapped:(id)a0;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (struct CGSize { double x0; double x1; })textSizeWithText:(id)a0;
- (double)maxWidthWithMessage:(id)a0 isBeforeRead:(BOOL)a1;
- (void)p_remarkMessageWatchEnd;
- (void)p_themeChange;
- (id)p_getAttributeStringCore:(id)a0 watchEnd:(BOOL)a1;
- (id)p_getDisplayAttributedString;
- (void).cxx_destruct;
- (id)displayMessage;

@end

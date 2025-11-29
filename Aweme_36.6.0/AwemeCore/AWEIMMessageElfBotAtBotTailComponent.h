@class NSString, AWEIMLatestKindOfMessageInConversationComponent;
@protocol AWEIMMessageElfBotDetectMessageProtocol;

@interface AWEIMMessageElfBotAtBotTailComponent : AWEIMFlexComponent <AWEIMMessageElfBotDetectMessageAction>

@property (weak, nonatomic) id<AWEIMMessageElfBotDetectMessageProtocol> detectService;
@property (weak, nonatomic) AWEIMLatestKindOfMessageInConversationComponent *latestGiphyComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenterIfNeeded;
- (void)elfBotMessageDetect:(id)a0;
- (void)showIfNeededWithMessage:(id)a0;
- (void)p_trackCreateButtonShow;
- (void)updateStyleWidth:(id)a0 isMultiSelect:(BOOL)a1;
- (void)p_updateUIIfNeeded:(BOOL)a0;
- (void)p_didTapButton;
- (void).cxx_destruct;
- (id)message;

@end

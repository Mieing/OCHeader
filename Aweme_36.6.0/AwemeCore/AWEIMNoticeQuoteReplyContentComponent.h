@class NSString, NSAttributedString;

@interface AWEIMNoticeQuoteReplyContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (copy, nonatomic) NSAttributedString *quoteAttrString;
@property (copy, nonatomic) NSAttributedString *contentAttrString;
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
- (void)p_createPresenter;
- (void)p_createAttrText;
- (void)p_didTapQuote;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end

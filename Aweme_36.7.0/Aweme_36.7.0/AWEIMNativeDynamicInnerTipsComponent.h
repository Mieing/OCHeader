@class AWEIMNativeDynamicCardTipsContent, AWEIMMessageConversation, NSMutableDictionary, NSString, NSAttributedString, AWEIMNativeDynamicCardElement;

@interface AWEIMNativeDynamicInnerTipsComponent : AWEIMFlexComponent <AWEIMMessageContentInterface, AWEIMInnerMessageContentComponentProtocol>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMNativeDynamicCardTipsContent *content;
@property (retain, nonatomic) AWEIMNativeDynamicCardElement *displayElement;
@property (retain, nonatomic) NSMutableDictionary *imageDict;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isLastElement;
@property (retain, nonatomic) NSAttributedString *displayAttributedString;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (id)componentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)enableDisplay;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)displayAttributedContent;
- (void)didTapTextInView:(id)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)p_setupDisplayString;
- (void)p_initAttributedContent;
- (id)viewIndentify;
- (id)p_fetchImage:(id)a0 key:(id)a1;
- (void)parse:(id)a0 textParts:(id)a1 placeholderContents:(id)a2;
- (id)findModelForKey:(id)a0;
- (id)generateAttrStrForAvatarNickname:(id)a0 isFirstVal:(BOOL)a1;
- (void).cxx_destruct;
- (id)displayMessage;

@end

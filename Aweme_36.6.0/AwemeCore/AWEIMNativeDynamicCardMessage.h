@class NSArray, NSString;

@interface AWEIMNativeDynamicCardMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMFormatPostMessageProtocol, AWEIMStreamMessageProtocol, AWEIMNativeDynamicCardMessageProtocol>

@property (copy, nonatomic) NSArray *supportSubElementList;
@property (copy, nonatomic) NSArray *subElements;
@property (copy, nonatomic) NSString *subElementsSign;
@property (nonatomic) unsigned long long streamStatus;
@property (copy, nonatomic) NSString *streamID;
@property (nonatomic) BOOL answerFinish;
@property (copy, nonatomic) NSArray *suggestionsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isSugLoading;
@property (nonatomic) BOOL isTypewriterFinished;
@property (nonatomic) long long chunkCount;

- (BOOL)isThinking;
- (BOOL)isTypeWriteMessage;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)formatPostTextContent;
- (unsigned long long)formatPostContentType;
- (BOOL)supportRefactorCell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (id)getAllTextContent;
- (BOOL)isAllowedForward;
- (id)quoteReplyMessageHintContent;
- (BOOL)enableThink;
- (void)updateSelfWithStreamMessage:(id)a0;
- (BOOL)shouldDegrade;
- (id)getTextContentOfTypes:(id)a0;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)messageLength;

@end

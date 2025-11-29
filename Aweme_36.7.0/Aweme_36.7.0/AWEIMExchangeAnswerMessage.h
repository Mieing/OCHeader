@class NSString, YYTextLayout, NSNumber;

@interface AWEIMExchangeAnswerMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *question;
@property (copy, nonatomic) NSString *answer;
@property (copy, nonatomic) NSString *bgImageId;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *answerUniqueId;
@property (copy, nonatomic) NSString *exchangeRequestId;
@property (copy, nonatomic) NSString *bgURLString;
@property (nonatomic) BOOL unlocked;
@property (retain, nonatomic) YYTextLayout *textLayout;
@property (retain, nonatomic) YYTextLayout *exchangeHintLayout;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (nonatomic) struct CGSize { double width; double height; } bubbleSize;
@property (nonatomic) struct CGSize { double width; double height; } contentBoundingSize;
@property (nonatomic) struct CGSize { double width; double height; } exchangeHintBoundingSize;
@property (nonatomic) struct CGSize { double width; double height; } exchangeHintSize;
@property (retain, nonatomic) NSNumber *requestAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getExchangeIndexWith:(id)a0;
+ (void)updateConversationExchangeIndexWith:(id)a0 message:(id)a1 completion:(id /* block */)a2;
+ (void)transferWithExchangeAnswerMessage:(id)a0 messageSender:(id)a1 messageReceiver:(id)a2 conversation:(id)a3 entrance:(id)a4 enterFrom:(id)a5 enterMethod:(id)a6 showSharePanel:(BOOL)a7;
+ (BOOL)isTopVCExchangeAnswer;
+ (BOOL)shouldShowExchangeAnswerEntryForPeerSecUid:(id)a0;
+ (void)startExchangeAnswerWithMessageReceiver:(id)a0 entrance:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 questionBank:(id)a4;
+ (void)startExchangeAnswerWithConversation:(id)a0 entrance:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 questionBank:(id)a4;
+ (BOOL)shouldShowExchangeAnswerEntrance;
+ (id)commonParamsDict;
+ (id)getAvartarURLStringWithIMUser:(id)a0;
+ (void)openExchangeAnswerPageWithParams:(id)a0;
+ (void)__startExchangeAnswerWithDict:(id)a0 entrance:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 questionBank:(id)a4;
+ (id)lynxURLString;
+ (id)getAvartarURLStringWithUser:(id)a0;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (void)updateWithMessage:(id)a0;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isAllowedForward;
- (id)msgHintInGroup:(BOOL)a0 isPush:(BOOL)a1;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

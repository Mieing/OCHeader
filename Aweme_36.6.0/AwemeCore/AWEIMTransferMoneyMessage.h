@class NSString;

@interface AWEIMTransferMoneyMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMTransferMoneyMessageProtocol>

@property (copy, nonatomic) NSString *orderNumber;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *senderHint;
@property (copy, nonatomic) NSString *receiverHint;
@property (copy, nonatomic) NSString *pushDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)maskLayerNeeded;
- (id)messageIconImage;
- (id)transferMoneyAmount;
- (id)messageExplanationText;
- (id)transferDetailPageSchema;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)displayTextWithType:(long long)a0;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldReloadWithUpdatedMessage:(id)a0;
- (unsigned long long)originalTransferMoneyMessageStatus;
- (id)originalMessageIconImage;
- (id)originalMessageExplanationText;
- (id)supportMessageMenuTypeList;
- (long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSString;

@interface AWEIMTransferMoneyGroupMessage : AWEIMTransferMoneyMessage <AWEIMTransferMoneyGroupMessageProtocol>

@property (copy, nonatomic) NSString *senderUid;
@property (copy, nonatomic) NSString *receiverUid;
@property (copy, nonatomic) NSString *thirdPartyHint;
@property (copy, nonatomic) NSString *topContentSuffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)topContent;
- (id)messageExplanationText;
- (unsigned long long)transUserType;
- (id)transferDetailPageSchema;
- (double)topContentWidth;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)displayTextWithType:(long long)a0;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

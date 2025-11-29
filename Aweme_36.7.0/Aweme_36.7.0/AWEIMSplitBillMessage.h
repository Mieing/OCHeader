@class NSString, NSDictionary;

@interface AWEIMSplitBillMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMSplitBillMessageProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *orderNo;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSDictionary *infoMap;
@property (copy, nonatomic) NSString *amountInfo;
@property (nonatomic) long long senderUid;
@property (nonatomic) unsigned long long userType;
@property (copy, nonatomic) NSString *hintText;
@property (nonatomic) long long amount;
@property (nonatomic) unsigned long long billStatus;
@property (nonatomic) BOOL isContainMe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)topContent;
- (id)middleContent;
- (BOOL)maskLayerNeeded;
- (BOOL)shouldFetchInfo;
- (id)messageIconImage;
- (void)transferDetailPage;
- (BOOL)hasYapedBill;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)displayTextWithType:(long long)a0;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)p_containMe;
- (void)p_setUserType;
- (void)p_setHintText;
- (long long)p_countsOfPayUser;
- (id)p_amountStr;
- (BOOL)shouldReloadWithUpdatedMessage:(id)a0;
- (id)supportMessageMenuTypeList;
- (long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

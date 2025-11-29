@class NSString, NSArray, AWEIMShareGroupChatScreenShootModel;

@interface AWEIMCombineShareMessage : AWEIMMessage <AWEIMMsgRefreshMessageProtocol, AWEIMMessageConfigProtocol>

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *contentString;
@property (nonatomic) long long originConversationId;
@property (retain, nonatomic) NSArray *coverContents;
@property (retain, nonatomic) NSArray *subMessages;
@property (nonatomic) long long combineShareVersion;
@property (copy, nonatomic) NSArray *inlineContentArr;
@property (copy, nonatomic) NSArray *uploadKeyList;
@property (copy, nonatomic) NSString *skey;
@property (retain, nonatomic) AWEIMShareGroupChatScreenShootModel *groupInfoModel;
@property (nonatomic) long long secConversationId;
@property (weak, nonatomic) AWEIMCombineShareMessage *parentCombineMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (void)updateWithMessage:(id)a0;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (void)asyncGetAccessChain:(id /* block */)a0;
- (BOOL)isCopyStyle;
- (BOOL)isSuccessUpload;
- (void)reCalculateContentString;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

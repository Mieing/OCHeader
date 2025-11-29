@class NSString, NSArray, AWEIMGroupChainsEntryActionModel;

@interface AWEIMGroupChainsMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (nonatomic) long long isStartChains;
@property (copy, nonatomic) NSString *startChainsUserId;
@property (copy, nonatomic) NSString *startChainsSecUserId;
@property (copy, nonatomic) NSString *chainsId;
@property (copy, nonatomic) NSString *chainsDescription;
@property (copy, nonatomic) NSString *chainsExample;
@property (copy, nonatomic) NSString *chainsAdditionalInfo;
@property (copy, nonatomic) NSArray *chainsEntryList;
@property (copy, nonatomic) AWEIMGroupChainsEntryActionModel *entryAction;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *sourceConversionId;
@property (copy, nonatomic) NSString *pushDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupChainOriginTextWithContent:(id)a0;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleContentPaddingInsets;
- (id)groupChainOriginContent;
- (id)groupChainsEntryContent:(BOOL)a0;
- (id)groupChainsAdditionalInfo;
- (id)groupChainsHeadContent;
- (id)groupChainsTiledContent;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (double)bubbleMaxWidth;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

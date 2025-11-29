@class NSString, AWEURLModel;

@interface AWEIMEntertainmentCommentShareMessage : AWEIMBaseCommentShareMessage <AWEIMMsgRefreshMessageProtocol, AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *yszName;
@property (copy, nonatomic) NSString *yszCid;
@property (copy, nonatomic) NSString *yszType;
@property (copy, nonatomic) NSString *commentAuthorUid;
@property (retain, nonatomic) AWEURLModel *yszCoverUrl;
@property (retain, nonatomic) AWEURLModel *commentMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (double)bubbleMaxWidthWithContext:(id)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (id)pluginsComponentsName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)im_commentAvailable;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

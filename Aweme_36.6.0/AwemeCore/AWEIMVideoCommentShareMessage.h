@class NSString, AWEURLModel;

@interface AWEIMVideoCommentShareMessage : AWEIMBaseCommentShareMessage <AWEIMMsgRefreshMessageProtocol, AWEIMFeedMediaDisplayable, AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) BOOL isBizAccount;
@property (retain, nonatomic) AWEURLModel *videoCover;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) AWEURLModel *commentMedia;
@property (copy, nonatomic) NSString *awemeTitle;
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
- (id)makeFeedMediaDisplayModel;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldChangeVisibleStatus;
- (BOOL)im_awemeAvailiable;
- (BOOL)im_commentAvailiable;
- (id)itemIDUsedForContentAvailableRefresh;
- (long long)p_mediaTypeWithContentDict:(id)a0;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

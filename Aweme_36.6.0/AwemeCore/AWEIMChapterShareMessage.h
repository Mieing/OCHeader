@class NSAttributedString, NSString, NSDictionary, AWEChapterInfo, AWEURLModel;
@protocol AWEIMMessageProtocol;

@interface AWEIMChapterShareMessage : AWEIMMessage <AWEIMMsgRefreshMessageProtocol, AWEIMMessageProtocol, AWEIMMessageConfigProtocol>

@property (nonatomic) long long awemeID;
@property (copy, nonatomic) NSDictionary *chapterInfoMessageDict;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) AWEChapterInfo *chapterInfo;
@property (retain, nonatomic) AWEURLModel *videoCover;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (nonatomic) long long chapterNodeIndex;
@property (nonatomic) long long shareTimestamp;
@property (nonatomic) long long chapterNodeTimestamp;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long isRecommendChapter;
@property (copy, nonatomic) NSString *awemeTitle;
@property (copy, nonatomic) NSAttributedString *chapterCopyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *fromUid;
@property (readonly, copy, nonatomic) NSString *secFromUid;
@property (readonly, copy, nonatomic) NSString *messageID;
@property (readonly, nonatomic) long long serverMessageID;
@property (readonly, nonatomic) long long aweType;
@property (readonly, nonatomic) long long quoteReplyMessageType;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) long long messageState;
@property (readonly, nonatomic) NSDictionary *syncedExt;
@property (readonly, nonatomic) NSDictionary *localExt;
@property (readonly, copy, nonatomic) NSString *petAIStyle;
@property (readonly, nonatomic) id<AWEIMMessageProtocol> quoteReplyOriginMessage;
@property (copy, nonatomic) NSDictionary *aiExt;
@property (copy, nonatomic) NSDictionary *aiBusinessExt;

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
- (BOOL)shouldChangeVisibleStatus;
- (BOOL)im_awemeAvailable;
- (unsigned long long)im_chapterAvailable;
- (id)getChapterInfoWithChapterDict:(id)a0;
- (id)itemIDUsedForContentAvailableRefresh;
- (id)im_awemeTitle;
- (id)im_chapterDesc;
- (id)im_chapterDetail;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

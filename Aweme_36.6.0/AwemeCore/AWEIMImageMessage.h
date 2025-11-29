@class NSString, UIImage, AWEIMMessageImageContent;

@interface AWEIMImageMessage : AWEIMMessage <AWEIMFoldMessageProtocol, AWEIMFeedMediaDisplayable, AWEIMNativeDynamicCardInnerMessageProtocol, AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) AWEIMMessageImageContent *content;
@property (retain, nonatomic) UIImage *forwardPreviewImage;
@property (nonatomic) BOOL isFolding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *parentMessageId;
@property (nonatomic) long long innerMessageIndex;

+ (Class)viewModelClass;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)getContent;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (id)quoteBizComponentName;
- (double)bubbleMaxHeight;
- (BOOL)showBubbleBorder;
- (BOOL)isAllowedEmojiReply;
- (void)updateWithMessage:(id)a0;
- (BOOL)isAttachmentAtLocal;
- (id)makeFeedMediaDisplayModel;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isAllowedForward;
- (BOOL)isAttachmentMessage;
- (BOOL)isAttachmentAtRemote;
- (struct CGSize { double x0; double x1; })getDisplaySizeOfMsg;
- (id)largeImageAttachmentMessageExtKey;
- (id)longImageAttachmentMessageExtKey;
- (id)clipThumbnailImageAttachmentMessageExtKey;
- (id)imageAttachmentCacheKey;
- (id)longImageAttachmentCacheKey;
- (id)clipThumbnailImageAttachmentCacheKey;
- (id)imageAttachmentMessageExtKey;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

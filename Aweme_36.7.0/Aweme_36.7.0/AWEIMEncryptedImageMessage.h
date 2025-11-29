@class IESIMExternalRefContent, NSString, UIImage, AWEIMEncryptedImageContent;

@interface AWEIMEncryptedImageMessage : AWEIMMessage <AWEIMFoldMessageProtocol, AWEIMFeedMediaDisplayable, AWEIMMessageConfigProtocol, AWEIMMessageShootSameProtocol, IESIMExternalRefMessageProtocol>

@property (readonly, copy, nonatomic) NSString *largeImageAttachmentMessageExtKey;
@property (readonly, copy, nonatomic) NSString *largeImageAttachmentCacheKey;
@property (readonly, copy, nonatomic) NSString *longImageAttachmentMessageExtKey;
@property (readonly, copy, nonatomic) NSString *longImageAttachmentCacheKey;
@property (readonly, copy, nonatomic) NSString *mediumImageAttachmentMessageExtKey;
@property (readonly, copy, nonatomic) NSString *mediumImageAttachmentCacheKey;
@property (readonly, copy, nonatomic) NSString *clipThumbnailImageAttachmentCacheKey;
@property (readonly, copy, nonatomic) NSString *clipThumbnailImageAttachmentMessageExtKey;
@property (readonly, copy, nonatomic) NSString *imageAttachmentMessageExtKey;
@property (readonly, copy, nonatomic) NSString *posterAttachmentMessageExtKey;
@property (readonly, copy, nonatomic) NSString *imageAttachmentCacheKey;
@property (readonly, copy, nonatomic) NSString *posterAttachmentCacheKey;
@property (retain) AWEIMEncryptedImageContent *content;
@property (retain, nonatomic) UIImage *imageToUploadFromPlatform;
@property (retain, nonatomic) UIImage *forwardPreviewImage;
@property (nonatomic) BOOL isFolding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESIMExternalRefContent *externalRef;

+ (Class)viewModelClass;
+ (BOOL)imImageDownloadBlackListMode;
+ (id)imImageDownloadBlackList;
+ (id)imImageDownloadConfig;
+ (long long)sendImageSwitch;

- (id)imgCardImgId;
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
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (id)pluginsComponentsName;
- (BOOL)isAllowedEmojiReply;
- (id)invisibleString;
- (void)updateWithMessage:(id)a0;
- (BOOL)im_isUnavaliable;
- (BOOL)isAttachmentAtLocal;
- (id)makeFeedMediaDisplayModel;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (id)getStickerID;
- (id)playStickerCustomHint;
- (BOOL)isAIGC;
- (BOOL)isAllowedForward;
- (BOOL)useOrigin;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (BOOL)isAttachmentMessage;
- (BOOL)isAttachmentAtRemote;
- (struct CGSize { double x0; double x1; })coverSizeWhenQuotedIfHave;
- (struct CGSize { double x0; double x1; })getDisplaySizeOfMsg;
- (BOOL)canSaveImageOrForwardMessage;
- (BOOL)shouldUseLargeImage;
- (BOOL)enableImageMessageLargeOpt;
- (BOOL)enableImageMessageLongOptWithMessage;
- (BOOL)enableImageMessageThumbOpt;
- (BOOL)enableImageMessageClipThumbnailOpt;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (BOOL)isLivePhoto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)contentIsAvailable;

@end

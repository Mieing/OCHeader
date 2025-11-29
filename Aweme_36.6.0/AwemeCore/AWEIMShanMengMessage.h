@class IESIMExternalRefContent, NSString, UIImage, NSNumber, AWEURLModel;

@interface AWEIMShanMengMessage : AWEIMMessage <AWEIMGiphyMessageProtocol, AWEIMMessageConfigProtocol>

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) AWEURLModel *giphyURL;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *emojiSource;
@property (retain, nonatomic) UIImage *forwardPreviewImage;
@property (copy, nonatomic) NSString *xmojiID;
@property (nonatomic) BOOL shouldShowXmojiFooter;
@property (retain, nonatomic) IESIMExternalRefContent *externalRef;
@property (copy, nonatomic) NSString *emojiType;
@property (copy, nonatomic) NSString *emojiFrom;
@property (copy, nonatomic) NSNumber *stickerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shanMengMessageWithXmojiStickerInfo:(id)a0;

- (double)bubbleCornerRadius;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (BOOL)isAllowedEmojiReply;
- (id)invisibleString;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)isAllowedForward;
- (struct CGSize { double x0; double x1; })resizeGiphySize;
- (unsigned long long)giphyStickerType;
- (void)didFinishConfig;
- (BOOL)shouldShowAddCustomStickerItem;
- (BOOL)isXmojiMsg;
- (BOOL)shouldShowXmojiFooterSnapshot;
- (double)im_fristShowXmojiMessageFooterTimestamp;
- (void)im_setFirstShowXmojiMessageFooterTimestamp:(double)a0;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)contentIsAvailable;

@end

@class IESIMExternalRefContent, NSString, AWEIMEncryptedVideoContent, UIImage;

@interface AWEIMVideoMessage : AWEIMMessage <AWEIMFoldMessageProtocol, AWEIMFeedMediaDisplayable, AWEIMMessageConfigProtocol, AWEIMMessageShootSameProtocol, IESIMExternalRefMessageProtocol>

@property (readonly, nonatomic) BOOL im_videoCaptionType;
@property (readonly, nonatomic) BOOL im_videoCaptionApproved;
@property (readonly, nonatomic) BOOL im_isUnavaliable;
@property (retain, nonatomic) AWEIMEncryptedVideoContent *videoContent;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } coverSize;
@property (retain, nonatomic) UIImage *forwardPreviewImage;
@property (nonatomic) BOOL isFolding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESIMExternalRefContent *externalRef;

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
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (id)invisibleString;
- (BOOL)isAttachmentAtLocal;
- (id)makeFeedMediaDisplayModel;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (id)getStickerID;
- (id)playStickerCustomHint;
- (BOOL)isAIGC;
- (BOOL)isAllowedForward;
- (BOOL)useOrigin;
- (BOOL)isAttachmentMessage;
- (BOOL)isAttachmentAtRemote;
- (struct CGSize { double x0; double x1; })coverSizeWhenQuotedIfHave;
- (struct CGSize { double x0; double x1; })getDisplaySizeOfMsg;
- (BOOL)enableShowMsgMenu;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)contentIsAvailable;

@end

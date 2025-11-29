@class UIImage, NSString, AWEIMEncryptedImageContent;

@interface AWEIMWatchOnceImageMessage : AWEIMMessage <AWEIMFeedMediaDisplayable, AWEIMMessageConfigProtocol, AWEIMWatchOnceMessageProtocol>

@property (retain, nonatomic) AWEIMEncryptedImageContent *content;
@property (retain, nonatomic) UIImage *imageToUploadFromPlatform;
@property (retain, nonatomic) UIImage *forwardPreviewImage;
@property (nonatomic) BOOL watchEnd;
@property (nonatomic) int watchCount;
@property (nonatomic) BOOL rip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long readState;

- (struct CGSize { double x0; double x1; })coverSize;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (long long)deletedAfterDisplayType;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)getContent;
- (BOOL)supportRefactorCell;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isNeedReloadWithNewMessage:(id)a0;
- (id)invisibleString;
- (void)updateWithMessage:(id)a0;
- (BOOL)isAttachmentAtLocal;
- (id)makeFeedMediaDisplayModel;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)useOrigin;
- (BOOL)isAttachmentMessage;
- (BOOL)isAttachmentAtRemote;
- (struct CGSize { double x0; double x1; })getDisplaySizeOfMsg;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end

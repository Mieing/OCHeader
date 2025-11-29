@class IESIMExternalRefContent, NSString, UIBezierPath, AWEIMMessage, AWEIMMessageContent;
@protocol AWEIMMessageAudioContentProtocol;

@interface AWEIMEncryptAudioMessage : AWEIMMessage <AWEIMAudioMessageProtocol, AWEIMMessageConfigProtocol, IESIMExternalRefMessageProtocol>

@property (retain, nonatomic) AWEIMMessageContent<AWEIMMessageAudioContentProtocol> *content;
@property (retain, nonatomic) UIBezierPath *audioPowerPath;
@property (nonatomic) struct CGSize { double width; double height; } audioPowerPathSize;
@property (nonatomic) struct CGSize { double width; double height; } quoteTitleSize;
@property (nonatomic) struct CGSize { double width; double height; } quoteContentSize;
@property (copy, nonatomic) NSString *audioText;
@property (nonatomic) BOOL hasPrefetchText;
@property (retain, nonatomic) AWEIMMessage *quotedMsg;
@property (retain, nonatomic) IESIMExternalRefContent *externalRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)getContent;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (id)invisibleString;
- (void)updateWithMessage:(id)a0;
- (BOOL)isAttachmentAtLocal;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isValidToDownload;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (BOOL)isAttachmentMessage;
- (BOOL)isAttachmentAtRemote;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)contentIsAvailable;

@end

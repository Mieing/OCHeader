@class IESIMExternalRefContent, NSString, UIBezierPath, AWEIMMessage, AWEIMMessageContent;
@protocol AWEIMMessageAudioContentProtocol;

@interface AWEIMEncryptAudioMessageV2 : AWEIMAudioMessage <AWEIMAudioMessageProtocol, AWEIMMsgRefreshMessageProtocol>

@property (retain, nonatomic) AWEIMMessageContent<AWEIMMessageAudioContentProtocol> *content;
@property (retain, nonatomic) UIBezierPath *audioPowerPath;
@property (nonatomic) struct CGSize { double x0; double x1; } audioPowerPathSize;
@property (nonatomic) struct CGSize { double x0; double x1; } quoteTitleSize;
@property (nonatomic) struct CGSize { double x0; double x1; } quoteContentSize;
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
- (BOOL)isUserCellType;
- (BOOL)isAllowedEmojiReply;
- (void)updateWithMessage:(id)a0;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isValidToDownload;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

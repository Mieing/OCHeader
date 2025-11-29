@class NSString, AWEIMMessageContent;
@protocol AWEIMMessageFileContentProtocol;

@interface AWEIMFileMessage : AWEIMMessage <AWEIMFileMessageProtocol, AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEIMMessageContent<AWEIMMessageFileContentProtocol> *content;
@property (readonly, nonatomic) NSString *fileIconName;
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) BOOL banned;
@property (readonly, nonatomic) double expireTimeInSec;
@property (readonly, nonatomic) double previewStatusLastCheckTimeInSec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)getContent;
- (BOOL)supportRefactorCell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (void)updateWithMessage:(id)a0;
- (BOOL)isAttachmentAtLocal;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (BOOL)isAttachmentMessage;
- (BOOL)isAttachmentAtRemote;
- (BOOL)p_isSending;
- (void)cacheFileMetaInfoWithStatus:(int)a0 expireTime:(int)a1;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

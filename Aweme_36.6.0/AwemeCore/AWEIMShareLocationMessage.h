@class AWEIMLocationContent, NSString;

@interface AWEIMShareLocationMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEIMLocationContent *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (void)updateWithMessage:(id)a0;
- (BOOL)isAttachmentAtLocal;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (BOOL)isAttachmentMessage;
- (BOOL)isAttachmentAtRemote;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

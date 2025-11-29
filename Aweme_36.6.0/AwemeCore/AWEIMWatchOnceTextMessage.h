@class NSString;

@interface AWEIMWatchOnceTextMessage : AWEIMTextSafeExamMessage <AWEIMWatchOnceMessageProtocol, AWEIMMsgRefreshMessageProtocol>

@property (nonatomic) BOOL watchEnd;
@property (nonatomic) int watchCount;
@property (nonatomic) BOOL rip;
@property (nonatomic) unsigned long long readState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })coverSize;
- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (long long)deletedAfterDisplayType;
- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isNeedReloadWithNewMessage:(id)a0;
- (id)invisibleString;
- (void)updateWithMessage:(id)a0;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isNeedApplyRichString;
- (void)fillContentWith:(id)a0;
- (id)content;
- (id)contentAttributes;

@end

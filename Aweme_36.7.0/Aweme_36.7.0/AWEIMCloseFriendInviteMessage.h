@class NSString;

@interface AWEIMCloseFriendInviteMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *senderTitle;
@property (copy, nonatomic) NSString *senderSubtitle;
@property (copy, nonatomic) NSString *senderSchema;
@property (copy, nonatomic) NSString *senderBtnText;
@property (copy, nonatomic) NSString *senderBtnTextBefore;
@property (copy, nonatomic) NSString *senderBtnTextAfter;
@property (copy, nonatomic) NSString *receiverTitle;
@property (copy, nonatomic) NSString *receiverSubtitle;
@property (copy, nonatomic) NSString *receiverSchema;
@property (copy, nonatomic) NSString *receiverBtnText;
@property (copy, nonatomic) NSString *receiverBtnTextBefore;
@property (copy, nonatomic) NSString *receiverBtnTextAfter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end

@class NSString;

@interface AWEIMFlamePetElfInviteChatMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *title_receiver;
@property (copy, nonatomic) NSString *sub_title;
@property (copy, nonatomic) NSString *head_url;
@property (nonatomic) long long pet_id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)displayTextWithType:(long long)a0;
- (BOOL)isAllowedEmojiReply;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end

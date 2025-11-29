@class NSString;

@interface AWEIMGameRoomInviteMessageV2 : AWEIMGameRoomInviteMessage <AWEIMMessageConfigProtocol>

@property (nonatomic) unsigned long long roomStatusV2;
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
- (BOOL)shouldShowNicknameWithMessageType;
- (id)gameHint;
- (id)supportMessageMenuTypeList;
- (long long)messageType;
- (id)title;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

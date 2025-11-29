@class NSString;

@interface AWEIMGameRoomInviteMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *coverImgURLStr;
@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) unsigned long long roomStatus;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *roomInfo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *gameHint;
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
- (id)supportMessageMenuTypeList;
- (long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSString, AWEURLModel;

@interface AWEIMRTVInviteFriendMessage : AWEIMMessage <AWEIMRTVInviteMessageProtocol, AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *brief;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (readonly, nonatomic) BOOL roomTerminal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)customMessageType;
+ (id)identifier;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (void)updateRoomTerminal:(BOOL)a0;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

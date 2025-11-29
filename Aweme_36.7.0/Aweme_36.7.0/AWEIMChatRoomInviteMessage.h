@class NSString, AWEURLModel;

@interface AWEIMChatRoomInviteMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMRTVInviteMessageProtocol>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *brief;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (nonatomic) BOOL hasAuthJoinRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)customMessageType;
+ (id)identifier;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (void)updateHasAuthJoinRoom:(BOOL)a0;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

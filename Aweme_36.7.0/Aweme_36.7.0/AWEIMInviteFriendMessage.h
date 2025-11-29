@class NSString;

@interface AWEIMInviteFriendMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *titlePart1;
@property (copy, nonatomic) NSString *titlePart2;
@property (copy, nonatomic) NSString *subtitlePart1;
@property (copy, nonatomic) NSString *subtitlePart2;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonTextDisable;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *msgHint;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *ownerSecID;
@property (nonatomic) BOOL isOver;
@property (nonatomic) BOOL hasTrackedChatShow;
@property (nonatomic) BOOL isJoined;
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
- (id)getSyncedExtDict;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (id)p_getEnterFromWithAweType:(long long)a0;
- (id)supportMessageMenuTypeList;
- (long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

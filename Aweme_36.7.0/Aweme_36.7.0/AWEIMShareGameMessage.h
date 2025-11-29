@class NSString, NSDictionary;

@interface AWEIMShareGameMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSString *gameDes;
@property (nonatomic) BOOL isGame;
@property (nonatomic) BOOL fromMoreSelectedFriendlist;
@property (retain, nonatomic) NSString *gameCoverUrl;
@property (retain, nonatomic) NSString *gameQuery;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *generalTitle;
@property (retain, nonatomic) NSString *generalDesc;
@property (retain, nonatomic) NSString *senderHint;
@property (retain, nonatomic) NSString *receiverHint;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *contentType;
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
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isAllowedForward;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

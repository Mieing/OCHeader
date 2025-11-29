@class NSString, NSDictionary;

@interface AWEIMGameInviteMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *roleID;
@property (nonatomic) long long serverID;
@property (copy, nonatomic) NSString *linkID;
@property (copy, nonatomic) NSString *userTag;
@property (copy, nonatomic) NSString *roomInfo;
@property (copy, nonatomic) NSString *titleHint;
@property (copy, nonatomic) NSString *downloadTitleHint;
@property (copy, nonatomic) NSString *roomType;
@property (copy, nonatomic) NSString *userRank;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detailString;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *coverImgURLStr;
@property (nonatomic) long long gameID;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) unsigned long long roomStatus;
@property (copy, nonatomic) NSString *packageName;
@property (nonatomic) long long versionCode;
@property (nonatomic) long long shareFrom;
@property (nonatomic) BOOL shouldRefreshStatus;
@property (nonatomic) unsigned long long refreshTimeIntervalType;
@property (nonatomic) BOOL shouldCheckAppExists;
@property (nonatomic) BOOL shouldOpenGameStation;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *gameStationScheme;
@property (nonatomic) unsigned long long schemeType;
@property (nonatomic) unsigned long long schemeAdjustType;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)gameIDString;
- (void)saveLinkID:(id)a0;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (id)gameIdentifier;
- (void)p_setupWithContentDict:(id)a0;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)linkID;

@end

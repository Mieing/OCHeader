@class KickOutCardInfo, NSString, ChatroomBanAction, PremadeCardInfo, UserBanAction, NSMutableArray;

@interface RealtimeControlInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int userChatroomRelation;
@property (retain, nonatomic) UserBanAction *userBanAction;
@property (retain, nonatomic) ChatroomBanAction *chatroomBanAction;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *kickOutWording;
@property (retain, nonatomic) NSMutableArray *updateUserDataList;
@property (nonatomic) BOOL disableEmoji;
@property (retain, nonatomic) PremadeCardInfo *premadeCardInfo;
@property (nonatomic) BOOL enableCustomEmoji;
@property (retain, nonatomic) KickOutCardInfo *kickOutCardInfo;

+ (void)initialize;

@end

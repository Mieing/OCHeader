@interface AWELiveRoomConfigModel : AWEBaseApiModel

@property (nonatomic) long long canBeLandscape;
@property (nonatomic) long long enableEmoji;
@property (nonatomic) long long enableShare;
@property (nonatomic) long long enableSendComment;
@property (nonatomic) long long enableSendGift;
@property (nonatomic) long long enableSendGiftGuide;
@property (nonatomic) long long enableSendShortcutGift;
@property (nonatomic) long long enableSendBarrage;
@property (nonatomic) long long enableFansClub;
@property (nonatomic) long long enableHourlyList;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableEmoji:(BOOL)a0;
- (BOOL)enableShare:(BOOL)a0;
- (BOOL)enableSendComment:(BOOL)a0;
- (BOOL)enableSendGift:(BOOL)a0;
- (BOOL)enableSendGiftGuide:(BOOL)a0;
- (BOOL)enableSendShortcutGift:(BOOL)a0;
- (BOOL)enableSendBarrage:(BOOL)a0;
- (BOOL)enableFansClub:(BOOL)a0;
- (BOOL)enableHourlyList:(BOOL)a0;

@end

@class BGMInfo, FinderRingBackHitInfo, NSString, NewRingBackBGMInfo, NSData, RingBackRecommendReasonInfo, FinderRingBack;

@interface FinderRingBackDetail : WXPBGeneratedMessage

@property (retain, nonatomic) FinderRingBack *ringBack;
@property (retain, nonatomic) FinderRingBackHitInfo *hitInfo;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) BGMInfo *bgminfo;
@property (nonatomic) unsigned int authProfessionType;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long settingCount;
@property (retain, nonatomic) NSString *authIconUrl;
@property (nonatomic) unsigned int finderAuthProfessionType;
@property (retain, nonatomic) NSString *finderAuthProfession;
@property (nonatomic) unsigned long long usedByFriendCount;
@property (retain, nonatomic) NSString *originalTitle;
@property (nonatomic) unsigned int recommendReasonType;
@property (retain, nonatomic) RingBackRecommendReasonInfo *recommendReasonInfo;
@property (retain, nonatomic) NewRingBackBGMInfo *newBgminfo;
@property (retain, nonatomic) NSData *backendContextInfo;

+ (void)initialize;

@end

@class NSData, NSString, LiveRoomImg, FinderLiveAnchorStatInfo, FinderLiveBadgeInfo, NSMutableArray, FinderContact, FinderLiveContactSpamInfo, FinderLiveLocation;

@interface FinderLiveContact : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int enableComment;
@property (nonatomic) unsigned int disableComment;
@property (nonatomic) unsigned int rewardAmountInHeat;
@property (nonatomic) unsigned int liveContactFlag;
@property (retain, nonatomic) FinderLiveBadgeInfo *badgeInfo;
@property (retain, nonatomic) NSString *displayNickname;
@property (nonatomic) unsigned int liveIdentity;
@property (retain, nonatomic) NSString *liveBgImgUrl;
@property (retain, nonatomic) NSData *liveContactExtInfo;
@property (nonatomic) BOOL disablePersonalMsg;
@property (retain, nonatomic) NSMutableArray *badgeInfos;
@property (nonatomic) unsigned long long intimacy;
@property (nonatomic) unsigned long long liveHeatValue;
@property (retain, nonatomic) LiveRoomImg *voiceLiveImg;
@property (retain, nonatomic) FinderLiveAnchorStatInfo *anchorStat;
@property (retain, nonatomic) FinderLiveContactSpamInfo *spamInfo;
@property (retain, nonatomic) FinderLiveLocation *location;

+ (void)initialize;

@end

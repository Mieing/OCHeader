@class NSString, FinderLiveFanClubInfo_Bulletin, FinderLiveFanClubContacts;

@interface FinderLiveFanClubInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *clubName;
@property (nonatomic) BOOL clubCreated;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSString *detailPageUrl;
@property (nonatomic) BOOL enableFanClub;
@property (nonatomic) unsigned int defaultIntimacy;
@property (nonatomic) unsigned int intimacyRefreshInterval;
@property (retain, nonatomic) FinderLiveFanClubInfo_Bulletin *bulletin;
@property (nonatomic) BOOL enableBulletin;
@property (retain, nonatomic) FinderLiveFanClubContacts *anchorContacts;
@property (nonatomic) BOOL isSuperFanClub;
@property (nonatomic) unsigned int superFansCount;
@property (retain, nonatomic) NSString *upgradePageUrl;

+ (void)initialize;

@end

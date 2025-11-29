@interface WCSearchGroupFeature : NSObject

@property (nonatomic) unsigned int groupLastActiveTime;
@property (nonatomic) unsigned int groupMySelfLastActiveTime;
@property (nonatomic) unsigned int groupMemberCount;
@property (nonatomic) unsigned int groupUnReadMsgCount;
@property (nonatomic) unsigned int groupFriendsCount;
@property (nonatomic) unsigned int myRecentMsgCount;
@property (nonatomic) unsigned int isMute;
@property (nonatomic) unsigned int myRecentSearchDays30;
@property (nonatomic) unsigned int myRecentSearchDays14;
@property (nonatomic) unsigned int myRecentSearchDays7;
@property (nonatomic) unsigned int myRecentSearchCount30;
@property (nonatomic) unsigned int myRecentSearchCount14;
@property (nonatomic) unsigned int myRecentSearchCount7;
@property (nonatomic) unsigned int myLastSearchTime;
@property (nonatomic) unsigned int isSysLangAsEn;
@property (nonatomic) unsigned int isSysLangAsCh;
@property (nonatomic) unsigned int matchType;

@end

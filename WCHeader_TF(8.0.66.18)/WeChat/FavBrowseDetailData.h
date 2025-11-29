@class NSString;

@interface FavBrowseDetailData : NSObject

@property (nonatomic) BOOL bResumeFirstBrowse;
@property (nonatomic) BOOL bResumeSecondBrowse;
@property (nonatomic) unsigned int favEntranceScene;
@property (nonatomic) unsigned int favEntranceIndex;
@property (nonatomic) unsigned int favId;
@property (nonatomic) unsigned int favType;
@property (retain, nonatomic) NSString *favInfoLength;
@property (nonatomic) unsigned int favSource;
@property (nonatomic) unsigned int favSourceTime;
@property (retain, nonatomic) NSString *favSourceInfo;
@property (nonatomic) unsigned long long favFirstPageBrowseTime;
@property (nonatomic) unsigned long long favSecondPageBrowseTime;
@property (nonatomic) unsigned int needOtherAppOpen;
@property (nonatomic) unsigned int enterSecondPageTimes;
@property (nonatomic) unsigned int sendToFriendsTimes;
@property (nonatomic) unsigned int shareToWCTimes;
@property (nonatomic) unsigned int editFav;
@property (nonatomic) unsigned int editTagTimes;
@property (nonatomic) unsigned int deleteFav;
@property (nonatomic) unsigned int scrollToBottom;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int favMainFrameIndex;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *favTag;
@property (nonatomic) long long enterFirstPageLogTime;
@property (nonatomic) long long enterSecondPageLogTime;
@property (nonatomic) unsigned int netStatus;
@property (nonatomic) unsigned int ifcache;
@property (nonatomic) unsigned int timeIntervalToOpen;
@property (nonatomic) unsigned int searchTagScene;

+ (id)creatDataWithItem:(id)a0 EntranceScene:(unsigned int)a1 EntranceIndex:(unsigned int)a2 SearchText:(id)a3;
+ (id)creatDataWithItem:(id)a0 EntranceScene:(unsigned int)a1 EntranceIndex:(unsigned int)a2 SearchText:(id)a3 TimeIntervalToOpen:(unsigned int)a4 SearchTagScene:(unsigned int)a5;

- (id)init;
- (void)dealloc;
- (void)configWithFavItem:(id)a0;
- (void)activateFirstBrowse;
- (void)deactivateFirstBrowse;
- (void)activateSecondBrowse;
- (void)deactivateSecondBrowse;
- (void)willResignActive;
- (void)didBecomeActive;
- (void).cxx_destruct;

@end

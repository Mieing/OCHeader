@class NSString, NSArray;

@interface DeviceRankDetailResonse : MMObject <PBCoding>

@property (retain, nonatomic) NSString *nsCoverUrl;
@property (retain, nonatomic) NSString *nsMotto;
@property (retain, nonatomic) NSString *nsDayScoreTitle;
@property (nonatomic) unsigned int uiDayScore;
@property (retain, nonatomic) NSArray *aryRankList;
@property (retain, nonatomic) NSArray *aryScoreDescList;
@property (retain, nonatomic) NSString *nsSource;
@property (retain, nonatomic) NSArray *affectedUserList;
@property (retain, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) NSArray *aryStepList;
@property (retain, nonatomic) NSArray *aryFollowList;
@property (nonatomic) BOOL uiIsFollower;
@property (retain, nonatomic) NSArray *aryButtonList;
@property (nonatomic) BOOL isLikedCover;
@property (nonatomic) unsigned int myranknum;
@property (retain, nonatomic) NSString *reportUrl;
@property (retain, nonatomic) NSArray *arrRecord;
@property (nonatomic) unsigned int likecount;
@property (retain, nonatomic) NSArray *arrLikes;
@property (nonatomic) BOOL isLike;
@property (retain, nonatomic) NSArray *arrGoal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsCoverUrl;
+ (void)PBArrayAdd_nsMotto;
+ (void)PBArrayAdd_nsDayScoreTitle;
+ (void)PBArrayAdd_uiDayScore;
+ (void)PBArrayAdd_aryRankList;
+ (void)PBArrayAdd_aryScoreDescList;
+ (void)PBArrayAdd_nsSource;
+ (void)PBArrayAdd_affectedUserList;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_shareTitle;
+ (void)PBArrayAdd_aryStepList;
+ (void)PBArrayAdd_aryFollowList;
+ (void)PBArrayAdd_uiIsFollower;
+ (void)PBArrayAdd_aryButtonList;
+ (void)PBArrayAdd_isLikedCover;
+ (void)PBArrayAdd_myranknum;
+ (void)PBArrayAdd_reportUrl;
+ (void)PBArrayAdd_arrRecord;
+ (void)PBArrayAdd_arrGoal;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end

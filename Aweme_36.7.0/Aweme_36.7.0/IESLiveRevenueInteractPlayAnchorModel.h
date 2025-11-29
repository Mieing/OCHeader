@class NSString, NSMutableArray, BattleUserInfo;

@interface IESLiveRevenueInteractPlayAnchorModel : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secIdStr;
@property (nonatomic) unsigned long long role;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *scoreText;
@property (copy, nonatomic) NSString *relativeScoreText;
@property (nonatomic) BOOL isInLargeScorePK;
@property (nonatomic) BOOL isRoomOwner;
@property (nonatomic) BOOL newScoreOpen;
@property (nonatomic) long long rankIndex;
@property (retain, nonatomic) NSMutableArray *rankListArray;
@property (nonatomic) BOOL isOwnersTeam;
@property (nonatomic) long long maxScore;
@property (nonatomic) BOOL isEliminate;
@property (retain, nonatomic) BattleUserInfo *battleInfo;

- (void).cxx_destruct;

@end

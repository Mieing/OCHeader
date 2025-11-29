@class NSMutableArray, MMFinderLiveConnectMicPkUIConf;

@interface MMFinderLiveConnectMicPkTeamInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *teams;
@property (retain, nonatomic) MMFinderLiveConnectMicPkUIConf *uiConf;

- (void)calculateTeamRank;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)team1;
- (id)team2;
- (id)currentBattleTeamsForServer;
- (id)firstValidTeam;
- (void).cxx_destruct;

@end

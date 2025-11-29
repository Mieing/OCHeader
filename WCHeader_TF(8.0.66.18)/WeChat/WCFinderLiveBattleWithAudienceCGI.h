@class NSString, NSArray, NSData, WCFinderDataItem;
@protocol MMFinderLivePkWinningConditionArguments;

@interface WCFinderLiveBattleWithAudienceCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *battleId;
@property (retain, nonatomic) NSString *lastBattleId;
@property (nonatomic) unsigned long long battleMode;
@property (nonatomic) unsigned long long battleScope;
@property (nonatomic) int opCode;
@property (nonatomic) unsigned long long battleDuration;
@property (retain, nonatomic) NSArray *battleTeams;
@property (nonatomic) unsigned long long winningCondition;
@property (retain, nonatomic) id<MMFinderLivePkWinningConditionArguments> winningConditionArguments;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 finderDataItem:(id)a1 liveCookies:(id)a2 battleId:(id)a3 battleMode:(unsigned long long)a4 battleScope:(unsigned long long)a5 opCode:(unsigned long long)a6 battleTeams:(id)a7 winningCondition:(unsigned long long)a8 winningConditionArguments:(id)a9 battleDuration:(unsigned long long)a10 lastBattleId:(id)a11 successBlock:(id /* block */)a12 failBlock:(id /* block */)a13;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

@class AWEPaidAuthConfig, NSMutableArray;

@interface AWEPaidStreamIAAUnlockManager : NSObject

@property (retain, nonatomic) AWEPaidAuthConfig *authConfig;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long currentWatchCount;
@property (retain, nonatomic) NSMutableArray *successUnlockArray;
@property (retain, nonatomic) NSMutableArray *successUnlockRankArray;
@property (retain, nonatomic) NSMutableArray *failUnlockArray;

- (id)initWithAuthConfig:(id)a0;
- (id)arrayToJsonString:(id)a0;
- (unsigned long long)unlockedRewardCount;
- (unsigned long long)unlockedSuccessRanks;
- (id)unlockedPaidAuthItems;
- (void)unlockRewardWithAwardConfig:(id)a0 watchCount:(long long)a1 adExtraInfo:(id)a2 extraInfo:(id)a3 completion:(id /* block */)a4;
- (id)modelToJsonDictionary:(id)a0;
- (void)cacheUnlockedRank:(id)a0;
- (BOOL)unlockSuccess;
- (void).cxx_destruct;
- (void)resetData;

@end

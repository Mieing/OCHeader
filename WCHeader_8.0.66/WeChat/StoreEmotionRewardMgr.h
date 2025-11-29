@class NSString, NSMutableDictionary;

@interface StoreEmotionRewardMgr : MMUserService <StoreEmotionRewardGetRewardCgiDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *getAllRewardInfoCgiDic;
@property (retain, nonatomic) NSMutableDictionary *getPriceOnlyRewardInfoCgiDic;
@property (retain, nonatomic) NSMutableDictionary *rewardInfoCacheDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCloseReward;

- (id)rewardInfoCacheForPid:(id)a0;
- (id)prepareForRewardWithPid:(id)a0 needAllInfo:(BOOL)a1;
- (void)saveRewardInfo:(id)a0 toFileWithPid:(id)a1;
- (void)removeRewardInfoCacheForPid:(id)a0;
- (void)onGetRewardCgiOkWithPid:(id)a0 Prices:(id)a1 DonorNum:(unsigned int)a2 Donors:(id)a3 EmotionReward:(id)a4;
- (void)onGetRewardCgiOkWithPid:(id)a0 Prices:(id)a1 EmotionReward:(id)a2;
- (void)onGetRewardCgiFailedWithPid:(id)a0;
- (void)onGetRewardCgiFailedForUnrewardableWithPid:(id)a0;
- (void).cxx_destruct;

@end

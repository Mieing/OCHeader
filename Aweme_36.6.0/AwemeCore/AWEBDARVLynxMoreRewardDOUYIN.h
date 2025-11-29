@class NSMutableDictionary, BDARVSourceModel, NSString, AWEBDARVMoreInfoDOUYIN, NSDictionary;

@interface AWEBDARVLynxMoreRewardDOUYIN : NSObject <AWEBDARVLynxMoreRewardAdapter>

@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (nonatomic) long long oneMoreRound;
@property (retain, nonatomic) NSMutableDictionary *rewardAgainConfigDic;
@property (copy, nonatomic) NSString *postDoneExtra;
@property (nonatomic) BOOL isRefreshTime;
@property (retain, nonatomic) AWEBDARVMoreInfoDOUYIN *rewardInfoDOUYIN;
@property (retain, nonatomic) AWEBDARVMoreInfoDOUYIN *moreInfoDOUYIN;
@property (nonatomic) BOOL moreVideo;
@property (copy, nonatomic) NSDictionary *commentDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasOneMore;
+ (BOOL)needCloseBlock;
+ (id)create;

- (void)moreRewardDisplayInfoWithCallBack:(id /* block */)a0;
- (void)getMoreRewardWithCallBack:(id /* block */)a0;
- (void)showToastWithCount:(long long)a0 text:(id)a1 experience:(long long)a2;
- (void)isMoreVideo;
- (void)saveRewardInfoDOUYIN:(id)a0;
- (void)refreshTimeMoreRewardDisplayInfoWithCallBack:(id /* block */)a0;
- (id)moreRewardParameters;
- (void)monitorWithEvent:(id)a0 errorCode:(long long)a1;
- (void).cxx_destruct;

@end

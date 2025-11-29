@class NSString, BDPPluginAppAdInfo, NSDictionary, BDARPopupRewardModel, BDARCloseButtonModel;

@interface BDARVSourceModel : NSObject

@property (nonatomic) long long adIntervals;
@property (copy, nonatomic) id /* block */ videoAdCallBack;
@property (retain, nonatomic) BDPPluginAppAdInfo *bdpPluginAppAdInfo;
@property (copy, nonatomic) NSString *adUnitId;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *adFrom;
@property (nonatomic) BOOL needShowLoading;
@property (nonatomic) unsigned long long loadingStyle;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) BOOL enablePlayerPreload;
@property (copy, nonatomic) NSDictionary *adExtra;
@property (copy, nonatomic) NSDictionary *extraData;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) long long cardStyle;
@property (copy, nonatomic) NSDictionary *rewardInfo;
@property (copy, nonatomic) NSDictionary *extraVideoData;
@property (nonatomic) long long rit;
@property (retain, nonatomic) BDARPopupRewardModel *retentionModal;
@property (retain, nonatomic) BDARCloseButtonModel *closeButtonModel;
@property (nonatomic) BOOL shouldCustomTransition;
@property (nonatomic) BOOL needOneStageAmount;
@property (copy, nonatomic) NSString *ticket;

- (id)initWithADUnitID:(id)a0 creatorID:(id)a1 adFrom:(id)a2;
- (id)initWithADUnitID:(id)a0 creatorID:(id)a1 adFrom:(id)a2 groupId:(id)a3 adExtra:(id)a4 extraData:(id)a5;
- (id)initWithADUnitID:(id)a0 creatorID:(id)a1 adFrom:(id)a2 groupId:(id)a3 adExtra:(id)a4 extraData:(id)a5 rit:(long long)a6;
- (BOOL)isKeySource;
- (id)initWithADUnitID:(id)a0 creatorID:(id)a1 adFrom:(id)a2 groupId:(id)a3;
- (id)initWithADUnitID:(id)a0 creatorID:(id)a1 adFrom:(id)a2 groupId:(id)a3 adExtra:(id)a4;
- (void).cxx_destruct;
- (id)uniqueID;

@end

@class BDARVSourceModel, NSArray, BDARewardTimeStampModel;

@interface BDARVEventTracker : NSObject

@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (copy, nonatomic) id /* block */ commonParams;
@property (copy, nonatomic) id /* block */ payloadData;
@property (copy, nonatomic) NSArray *models;
@property (nonatomic) long long adId;
@property (nonatomic) unsigned long long rewardAdType;
@property (nonatomic) unsigned long long renderType;
@property (retain, nonatomic) BDARewardTimeStampModel *timestampModel;
@property (copy, nonatomic) id /* block */ playerStatusInfo;

- (void)eventData:(id)a0;
- (id)timestampModel;
- (void)eventData:(id)a0 adExtraData:(id)a1;
- (BOOL)needSpecifyAdDataWithLabel:(id)a0;
- (void)eventDataV3:(id)a0;
- (id)commonCategoryParams;
- (id)commonMetricParams;
- (id)commonExtraParams;
- (void)updateLynxSetupTimeInfo:(id)a0;
- (void)updateReqTimingModel:(id)a0;
- (void)updateTimestampWithType:(unsigned long long)a0;
- (void)sendEventWithLifeCycle;
- (void).cxx_destruct;

@end

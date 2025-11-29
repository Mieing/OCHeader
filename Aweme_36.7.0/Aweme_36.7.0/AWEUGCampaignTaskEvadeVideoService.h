@class AWECampaignWatchTaskModel, NSString;

@interface AWEUGCampaignTaskEvadeVideoService : NSObject <AWEUGCampaignTaskEvadeVideoProtocol>

@property (retain, nonatomic) AWECampaignWatchTaskModel *watchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (BOOL)checkAwemeIfNeedEvade:(id)a0 type:(id)a1;
- (BOOL)checkAwemeIsGov:(id)a0;
- (BOOL)checkAwemeIsGlobalAvoidPendant:(id)a0;
- (BOOL)checkAwemeIsAllAD:(id)a0;
- (BOOL)checkAwemeIsAD_CPC:(id)a0;
- (BOOL)checkAwemeIsAD_DOUPlus:(id)a0;
- (BOOL)checkAwemeIsAD_Other:(id)a0;
- (BOOL)checkAwemeIsRecommendUser:(id)a0;
- (BOOL)checkAwemeIsHotSpot:(id)a0;
- (BOOL)checkAweme:(id)a0 type:(id)a1;
- (id)awemeTypeDic;
- (BOOL)needEvadeFromVideo:(id)a0;
- (void).cxx_destruct;

@end

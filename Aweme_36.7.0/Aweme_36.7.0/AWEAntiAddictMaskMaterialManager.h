@class NSArray, NSDictionary, AWEAwemeModel, AWEAntiAddictFeedInsertedModel, NSString;

@interface AWEAntiAddictMaskMaterialManager : NSObject <AWEUserMessage, AWEAntiAddictionInfoModelUpdateMessage, AWEAntiAddictMaskMaterialManagerProtocol>

@property (retain) AWEAwemeModel *restSelectedAwemeModel;
@property (retain) AWEAwemeModel *sleepSelectedAwemeModel;
@property (retain) NSArray *awemeModelArray;
@property (retain) NSArray *activityAwemeModelArray;
@property (copy) NSDictionary *replacedItemIdMap;
@property (retain, nonatomic) AWEAntiAddictFeedInsertedModel *feedInsertedModel;
@property (retain) NSArray *sampleRelaxDayMaterials;
@property (retain) NSArray *sampleRelaxNightMaterials;
@property (retain) NSArray *sampleSleepMaterials;
@property (retain) NSArray *sampleBlockMaterials;
@property (retain) NSArray *sampleBlockNightMaterials;
@property (nonatomic) BOOL isCacheAvaliable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)shouldFetchVideo;
- (void)loadAntiAddictMaskAwemoModels:(id /* block */)a0;
- (id)getUserSelectedAntiAddictVideoInfo:(unsigned long long)a0;
- (void)clearUserSelectedAntiAddictVideoInfo:(unsigned long long)a0;
- (id)antiAddictUserRelatedRestMaskModelKey;
- (id)antiAddictUserRelatedSleepMaskModelKey;
- (id)antiAddictUserRelatedReplacedModelKey;
- (void)didUpdateAntiAddictionInfoModel:(BOOL)a0 currentModel:(id)a1;
- (void)handleAntiAddictEnterNotification:(id)a0;
- (id)itemIDStorageKeyForType:(unsigned long long)a0 dayOrNight:(long long)a1;
- (void)clearRestSelectedAwemeModel;
- (void)clearSleepSelectedAwemeModel;
- (void)updateSampleMaterials;
- (BOOL)isMatchFilterVideo:(id)a0;
- (id)getRandomActivity:(unsigned long long)a0 dayOrNight:(long long)a1;
- (id)getModelMatchSetting:(id)a0 itemID:(id)a1;
- (id)getRandomServerMaterial:(unsigned long long)a0 dayOrNight:(long long)a1;
- (void)updateCurrentFeedInsertedAddicateInfoModel:(unsigned long long)a0 model:(id)a1 remindVideoInfoModel:(id)a2 activityInfoModel:(id)a3;
- (BOOL)isEfficientActionBtn:(id)a0 jumpUrl:(id)a1;
- (id)getAntiAddictNormalMaskVideoInfoModel;
- (BOOL)isValidAntiAddictCustomRemindType:(unsigned long long)a0;
- (void)updateReplacedItemIds:(id)a0 antiAddictMaskType:(unsigned long long)a1;
- (void)clearVideoCacheIfNeedWithModel:(id)a0;
- (id)downsampleArray:(id)a0 toCount:(unsigned long long)a1;
- (BOOL)shouldClearActivityVideoCache:(id)a0;
- (void)clearActivityAwemeModel;
- (BOOL)shouldClearOfficialVideoCache:(id)a0;
- (void)clearofficialAwemeModel;
- (BOOL)isConfigIds:(id)a0 containsCacheIds:(id)a1;
- (id)getAidForInfoModel:(id)a0;
- (void)clearAntiAddictInfo;
- (id)storageKeyWithCurrentUid;
- (id)antiAddictMaskModelWithType:(unsigned long long)a0 countDownTime:(double)a1 blockToTime:(double)a2 showLastMaterial:(BOOL)a3;
- (id)antiAddictViewConfirmBtnTitle;
- (id)antiAddictViewConfirmBtnJumpUrl;
- (id)activityMaterialList;
- (id)restDayMaterialList;
- (id)restNightMaterialList;
- (id)sleepMaterialList;
- (id)blockMaterialList;
- (void)showVideoReplaceToastIfNeed:(unsigned long long)a0 itemID:(id)a1;
- (id)getInsertAntiAddictParamsForTrack;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end

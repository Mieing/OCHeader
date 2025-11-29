@class IESECListKitListUpdater, NSString, NSArray, UICollectionViewCell, NSObject, IESECMallListKitCellData, IESECListKitItemDataModel;
@protocol IESECListKitCellControllerProtocol;

@interface IESECMallNativeCardActionHandler : NSObject

@property (copy, nonatomic) id /* block */ queryRecommendBlk;
@property (copy, nonatomic) NSString *currentAction;
@property (nonatomic) BOOL ecomMallReduceRecommendInfo;
@property (copy, nonatomic) NSArray *mallTransitionPageNameArray;
@property (nonatomic) double startPlayTime;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (retain, nonatomic) IESECMallListKitCellData *cellModel;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (weak, nonatomic) NSObject<IESECListKitCellControllerProtocol> *cellController;
@property (nonatomic) BOOL isInsertCard;
@property (nonatomic) BOOL isAD;

- (id)playerManager;
- (void)reportSchemaDiff:(id)a0 outSchema:(id)a1;
- (void)goToLiveWithSchema:(id)a0 fullSchema:(id)a1 cellModel:(id)a2 isProduct:(BOOL)a3 bcmData:(id)a4;
- (void)sendClickQueryRecommendEvent:(id)a0 index:(unsigned long long)a1 section:(unsigned long long)a2 windVaneParams:(id)a3 windVaneData:(id)a4;
- (id)liveRouterSchemaWithSchema:(id)a0 fullSchema:(id)a1 cellModel:(id)a2 isProduct:(BOOL)a3;
- (id)addLiveCardCommonParams:(id)a0;
- (void)sendMallReportNotifi:(id)a0 eventParams:(id)a1;
- (id)addLiveCardFeedBackCommonParams:(id)a0;
- (id)addLiveCardNewFeedbackParams:(id)a0;
- (id)getGlobalEnterFromMergeString;
- (void)trackWithAdInfoKey:(id)a0 duration:(double)a1;
- (void)reportAutoPlayWithCellModel:(id)a0;
- (void)trackWithAdInfoKey:(id)a0;
- (id)getGlobalPreviousPageString;
- (void)allowInstantFetch:(id)a0;
- (void)saveAddressBeforeJumpIfNeeded;
- (void)reportLiveCardClickWithCellModel:(id)a0 isProduct:(BOOL)a1;
- (void)reportInsertCardClickWithCellModel:(id)a0 isProduct:(BOOL)a1;
- (void)goToVideoWithSchema:(id)a0 fullSchema:(id)a1 cellModel:(id)a2 isProduct:(BOOL)a3 bcmData:(id)a4;
- (id)videoRouterSchemaWithSchema:(id)a0 fullSchema:(id)a1 cellModel:(id)a2 isProduct:(BOOL)a3;
- (void)reportVideoCardClickWithCellModel:(id)a0;
- (void)reportVideoCardLiveHeaderShowWithParams:(id)a0 isShow:(BOOL)a1;
- (id)getGlobalPageNameString;
- (id)getGlobalEnterFromMergeStringVideo;
- (id)getTrackerParamsWithCellModel:(id)a0 appendDic:(id)a1;
- (BOOL)__isInstantORWindFirst;
- (BOOL)reportCardClickEventFromBff;
- (void)sendMallReportNotifi:(id)a0 eventParams:(id)a1 btm:(id)a2;
- (id)addVideoCardCommonParams:(id)a0;
- (void)goToLiveWithSchema:(id)a0 fullSchema:(id)a1 cellModel:(id)a2 isProduct:(BOOL)a3;
- (void)goToVideoWithSchema:(id)a0 fullSchema:(id)a1 cellModel:(id)a2 isProduct:(BOOL)a3;
- (void)goToLiveHeaderWithModel:(id)a0 cellModel:(id)a1 trackParams:(id)a2;
- (id)addVideoCardNewFeedbackParams:(id)a0;
- (id)addVideoCardFeedBackCommonParams:(id)a0;
- (id)appendTrackerParamsIsProduct:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)sendAction:(id)a0;
- (void)dealloc;

@end

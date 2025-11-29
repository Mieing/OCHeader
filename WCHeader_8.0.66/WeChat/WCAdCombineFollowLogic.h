@class WCDataItem, WCAdCombineFollowInfo, NSString, MMTimer, WCAdvertiseInfo, WCAdHalfScreenCombineFollowView;

@interface WCAdCombineFollowLogic : WCAdvertiseOperationLogicBase <WCAdHalfScreenCombineFollowViewDelegate, PBMessageObserverDelegate, IContactMgrExt>

@property (retain, nonatomic) WCAdCombineFollowInfo *combineFollowInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdvertiseInfo *adData;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) long long exposureScene;
@property (nonatomic) int source;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (retain, nonatomic) WCAdHalfScreenCombineFollowView *halfScreenView;
@property (nonatomic) BOOL isWorking;
@property (nonatomic) int brandFollowResult;
@property (nonatomic) int finderFollowResult;
@property (retain, nonatomic) MMTimer *brandContactSyncTimer;
@property (nonatomic) int brandUIScene;
@property (nonatomic) int brandUISubScene;
@property (nonatomic) long long finderFromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCombineFollowInfo:(id)a0 dataItem:(id)a1 adData:(id)a2 snsId:(id)a3 exposureScene:(long long)a4 source:(int)a5 canvasDynamicInfo:(id)a6;
- (void)dealloc;
- (void)parseScene;
- (void)start;
- (void)checkFollowState;
- (BOOL)isBrandFollowed;
- (BOOL)isFinderFollowed;
- (void)jumpBrand;
- (void)jumpFinder;
- (void)jumpWhenAllFollowed;
- (void)jumpWhenAllFollowSuccess;
- (id)fetchProfilePageWrap;
- (void)onConfirmButtonClickWithBrandInfo:(id)a0 finderInfo:(id)a1;
- (void)doBrandFollow;
- (void)doFinderFollow;
- (void)onBrandFollowFinish:(BOOL)a0;
- (void)onFinderFollowFinish:(BOOL)a0;
- (void)checkAllFollowFinish;
- (void)checkFinderFollowStateFromServer:(id)a0;
- (void)createVerify:(id)a0 andSubScene:(unsigned int)a1;
- (void)invalidateBrandContactSyncTimer;
- (void)onTimeoutBrandContactSync;
- (void)onModifyContact:(id)a0;
- (void)scheduleBrandContactSyncTimer;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

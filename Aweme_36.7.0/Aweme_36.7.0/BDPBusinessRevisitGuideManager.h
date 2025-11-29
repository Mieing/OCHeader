@class NSString, NSMutableDictionary, NSMutableSet;

@interface BDPBusinessRevisitGuideManager : NSObject <BDPContainerLifeCycleMessage, BDPBusinessRevisitGuideManager, BDPBusinessRevisitGuideDelegte>

@property (retain, nonatomic) NSMutableDictionary *jumpSchemaAfterExitMap;
@property (retain, nonatomic) NSMutableSet *canShowPopupUniqueIdSet;
@property (retain, nonatomic) NSMutableSet *rebootingUniqueIdSet;
@property (retain, nonatomic) NSMutableDictionary *idToContextMap;
@property (retain, nonatomic) NSMutableDictionary *alreadyUploadDict;
@property (retain, nonatomic) NSMutableDictionary *showingGuideUniqueIdDict;
@property BOOL shouldShowSideBarRevisitGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)applicationEnterWithUniqueID:(id)a0;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)viewDidLoad:(id)a0 uniqueID:(id)a1;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (BOOL)tryToMarkShouldShowGuideByAction:(unsigned long long)a0 appID:(id)a1;
- (void)tryToShowRevisitGuideWithUniqueID:(id)a0 judgeCompletion:(id /* block */)a1 guideDismissCompletion:(id /* block */)a2;
- (BOOL)isShowingGuideForUniqueID:(id)a0;
- (void)updateRevisitDataForUniqueID:(id)a0;
- (void)updateLocalRevisitDataForUniqueID:(id)a0 eventParams:(id)a1;
- (void)markUpdateInfoWithUniqueID:(id)a0 imageUrl:(id)a1 title:(id)a2 subTitle:(id)a3 forPath:(id)a4 taskID:(id)a5;
- (void)markUpdateInfoValidUniqueID:(id)a0 taskID:(id)a1;
- (void)updateGuidanceInfoUniqueID:(id)a0 params:(id)a1;
- (unsigned long long)revisitEffectGuideGroup;
- (id)getRevisitEffectGuideIconImageWithUniqueID:(id)a0;
- (BOOL)checkLimitMaxPopupShowNumber:(long long)a0 withUniqueID:(id)a1;
- (void)guideContextDidUpdateInfo:(id)a0;
- (BOOL)isCurrentAppLoadByRestart:(id)a0;
- (BOOL)isUserLoginWithAppID:(id)a0;
- (void)p_trackShowWithContext:(id)a0;
- (BOOL)isFeedScene:(id)a0;
- (void)p_showRevisitGuideV2WithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)p_trackShowWithRevistGuideController:(id)a0;
- (void)p_trackCloseWithRevistGuideController:(id)a0;
- (id)getGuideCommonTrackDictWithUniqueID:(id)a0;
- (void).cxx_destruct;

@end

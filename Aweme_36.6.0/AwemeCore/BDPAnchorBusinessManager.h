@class NSNumber, NSString, BDPAppPageURL, NSMutableArray, BDPUniqueID, UIButton;

@interface BDPAnchorBusinessManager : NSObject <BDPShareEventHandler, BDPAppRouteChangeMessage, BDPScreenRecorderMessage, BDPAnchorBusinessService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIButton *anchorButton;
@property (retain, nonatomic) NSNumber *maxShelvesNum;
@property (retain, nonatomic) UIButton *shelfAddButton;
@property (retain, nonatomic) UIButton *shelfMultiAddButton;
@property (retain, nonatomic) UIButton *shelfDeleteButton;
@property (retain, nonatomic) UIButton *shelfCompleteButton;
@property (retain, nonatomic) NSString *anchorAction;
@property (nonatomic) long long blockShelfAdd;
@property (retain, nonatomic) BDPAppPageURL *currentAppPageURL;
@property (retain, nonatomic) BDPAppPageURL *explainingPageURL;
@property (retain, nonatomic) NSMutableArray *mountedPageURLs;
@property (nonatomic) BOOL isProductTypeForCurrentPagePath;
@property (nonatomic) BOOL shelfCardAddButtonCanClick;
@property (copy, nonatomic) NSString *unComplianceToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long currentMode;
@property (nonatomic) long long anchorType;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)onAppRouteChangePageWillEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)showAnchorButtonOnController:(id)a0 withUniqueID:(id)a1;
- (void)handleLiveMountWithParams:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)completeButtonDidClick:(id)a0;
- (void)screenRecordDidStartWithExtra:(id)a0;
- (void)screenRecordDidStopWithExtra:(id)a0;
- (void)screenRecordReceiveException:(id)a0 extra:(id)a1;
- (void)screenRecordRunningStateDidChanged:(unsigned long long)a0;
- (void)resetAnchorButtons;
- (void)showShelfButtonOnView:(id)a0;
- (void)showVideoAnchorButtonOnView:(id)a0;
- (void)showLiveAnchorButtonOnView:(id)a0;
- (void)showLiveShareAnchorButtonOnView:(id)a0;
- (void)showMissionAnchorButtonOnView:(id)a0 type:(long long)a1;
- (void)updateAnchorButtons;
- (void)hideAllShelfButton;
- (void)updateShelfButton;
- (void)p_tryToshowAnchorProductGuideViewControllerWithGuideURL;
- (void)updateAnchorButton;
- (BOOL)shouldHideAnchorButton;
- (BOOL)shouldHideAnchorButtonFromCustom;
- (void)sendLiveMountEvent:(id)a0 andFrom:(id)a1;
- (void)showUserBlockedToastWithUniqueID:(id)a0 unmountReason:(id)a1 channel:(id)a2 tagInfo:(id)a3 actionCompletion:(id /* block */)a4;
- (void)didSelectedMountPageWithTitle:(id)a0 appName:(id)a1 appIcon:(id)a2 schema:(id)a3 authBCType:(long long)a4 fromShareChain:(BOOL)a5;
- (id)handleBCTypeWithType:(long long)a0 uniqueID:(id)a1 originalPath:(id)a2;
- (id)buildNewAnchorButton;
- (void)anchorButtonDidClick:(id)a0;
- (void)handleShareBussinessForChannel:(id)a0 withParams:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;

@end

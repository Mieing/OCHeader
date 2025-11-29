@class AFDCloseFriendsVisitorListViewController, NSString, AFDDiggParticleEffectsView, AFDCloseFriendsMomentModel, AFDCloseFriendsVisitorBarView, AFDCloseFriendsMomentContext, AWEListDataController;
@protocol AWEViewerListDataControllerProtocol;

@interface AFDCloseFriendsVisitorManager : NSObject <AWEAwemeViewedManagerMessage, AFDCloseFriendsVisitorManagerProtocol>

@property (retain, nonatomic) AFDCloseFriendsMomentModel *momentModel;
@property (copy, nonatomic) NSString *lastMomentIDForViewed;
@property (retain, nonatomic) NSString *lastShowedOnboardingAlertMomentID;
@property (retain, nonatomic) NSString *lastShowedVisitorAlertMomentID;
@property (nonatomic) BOOL notHighLightInserUser;
@property (retain, nonatomic) AWEListDataController<AWEViewerListDataControllerProtocol> *viewerListdataController;
@property (retain, nonatomic) AFDCloseFriendsVisitorListViewController *visitorListVC;
@property (readonly, nonatomic) AFDCloseFriendsVisitorBarView *visitorBarView;
@property (readonly, nonatomic) AFDDiggParticleEffectsView *favoriteAnimationView;
@property (weak, nonatomic) AFDCloseFriendsMomentContext *context;
@property (nonatomic) BOOL isCurrentMomentCell;
@property (nonatomic) BOOL isScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowVisitorAlertWithModel:(id)a0;
+ (BOOL)isHitBrowseRecordTest;
+ (long long)daysToExpire;
+ (BOOL)hasShownVisitorAlert;
+ (long long)hasExpiredWithExpireTime:(unsigned long long)a0 ttlDays:(id)a1;

- (BOOL)canShowVisitorAlert;
- (BOOL)isVisitorAlertShowed;
- (void)dataControllerDidRefresh:(id)a0 error:(id)a1;
- (void)openVisitorListPanelWithEnterMethod:(id)a0;
- (BOOL)shouldRequestVisitorList;
- (id)getExtraRequestParams:(BOOL)a0;
- (void)setData:(id)a0 context:(id)a1;
- (void)cellDidAppear;
- (BOOL)canNoticeOpenVisitorListPanel;
- (void)markVisitorAlertShowed;
- (void)markOnBoardingAlertShowed;
- (void)requestVisitorList:(BOOL)a0;
- (void)onClickVisitorBar:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

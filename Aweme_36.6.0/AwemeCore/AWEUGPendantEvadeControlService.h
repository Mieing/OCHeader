@class NSString, AWEUGCountDownConfigModel, AWEAwemeModel, NSObject;
@protocol AWEUGEvadeVideoContentService, AWEUGEvadeSceneService, AWEUGPendantEvadeControlCustomProtocol;

@interface AWEUGPendantEvadeControlService : NSObject

@property (nonatomic) BOOL displayingSkylightView;
@property (nonatomic) BOOL displayProgressView;
@property (nonatomic) BOOL needHidePendant;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (copy, nonatomic) id /* block */ multiSceneResultHandler;
@property (nonatomic) unsigned long long controlType;
@property (nonatomic) BOOL isFromFeedVC;
@property (copy, nonatomic) NSString *returnType;
@property (retain, nonatomic) AWEUGCountDownConfigModel *countDownConfig;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isPlayAweme;
@property (nonatomic) unsigned long long pendantSceneCheckStatus;
@property (nonatomic) unsigned long long pendantFeedCheckStatus;
@property (copy, nonatomic) NSString *currScene;
@property (copy, nonatomic) NSString *evadeReason;
@property (retain, nonatomic) NSObject<AWEUGEvadeSceneService> *evadeScene;
@property (retain, nonatomic) NSObject<AWEUGEvadeVideoContentService> *evadeVideo;
@property (weak, nonatomic) id<AWEUGPendantEvadeControlCustomProtocol> customEvadeDelegate;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) BOOL showStatus;
@property (copy, nonatomic) NSString *activityId;

- (void)setupNotification;
- (void)sceneDidAppeared:(id)a0;
- (void)beforeEnterToLandscapeFeedNotification:(id)a0;
- (void)afterQuitFromLandscapeFeedNotification:(id)a0;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (id)currentFeedContainerViewController;
- (void)getCurrentFeedAweModel;
- (long long)currentFeedType;
- (void)pendantNeedShow:(id)a0;
- (void)pendantNeedHide:(id)a0;
- (void)feedSkylightViewDidShow:(id)a0;
- (void)feedSkylightViewDidHide:(id)a0;
- (void)feedPublishProgressViewDidShow:(id)a0;
- (void)feedPublishProgressViewDidHide:(id)a0;
- (void)feedLongPressViewDidShow:(id)a0;
- (void)feedLongPressViewDidHide:(id)a0;
- (void)feedTableViewControllerWillPlayAweme:(id)a0;
- (void)updateWithFeedTableVC:(id)a0;
- (void)updateEvadeType:(unsigned long long)a0;
- (BOOL)pendantCanShowForGeneralEvadeRule:(id)a0;
- (BOOL)checkIfcanShow;
- (void)updateWithDetaiTabVC:(id)a0;
- (void)sceneDidDisappeared:(id)a0;
- (id)initWithCountDownConfig:(id)a0 scene:(id)a1 options:(unsigned long long)a2 callback:(id /* block */)a3;
- (void)checkPendantStatusWithScene:(id)a0;
- (BOOL)checkIfCanShowPendantWithUpdatedScene:(id)a0;
- (BOOL)checkIfCanShowPendantWithUpdatedAweme:(id)a0;
- (BOOL)checkIfSceneSwitched:(id)a0;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;
- (void)dealloc;

@end

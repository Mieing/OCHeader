@class NSString, AWEUGCountDownConfigModel, AWEAwemeModel;
@protocol AWEUGFeedPendantEvadeControlCustomProtocol;

@interface AWEUGFeedPendantEvadeControlService : NSObject

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
@property (weak, nonatomic) id<AWEUGFeedPendantEvadeControlCustomProtocol> customEvadeDelegate;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) BOOL showStatus;
@property (copy, nonatomic) NSString *activityId;
@property (nonatomic) BOOL enableNoAwemeShowPendant;

- (void)setupNotification;
- (void)feedContainerViewControllerDidSwitchTab:(id)a0;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (id)currentFeedContainerViewController;
- (void)getCurrentFeedAweModel;
- (void)checkPendantStatus;
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
- (void)awesomeSplashRemoved:(id)a0;
- (BOOL)shouldFeedPendantAvoidFieldReplace;
- (BOOL)checkIfCanShowPendant;
- (BOOL)shouldDismissTemporarilyWithAwemeModel:(id)a0;
- (void)updateWithFeedTableVC:(id)a0;
- (void)updateEvadeType:(unsigned long long)a0;
- (BOOL)pendantCanShowForGeneralEvadeRule:(id)a0;
- (BOOL)checkIfcanShow;
- (void)campaignHasBegin;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)a0 callback:(id /* block */)a1;

@end

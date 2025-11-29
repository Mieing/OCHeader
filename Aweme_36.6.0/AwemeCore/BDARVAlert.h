@class NSString, NSArray, BDARewardedVideoAdConfig, BDARVIndicatorView, BDARVPlayerManager, NSDictionary, BDARVSourceModel, BDARFirstFrameTime, BDARVNativeAlert;
@protocol BDARVAlertDelegate;

@interface BDARVAlert : UIView

@property (weak, nonatomic) id<BDARVAlertDelegate> bannerDelegate;
@property (copy, nonatomic) NSString *adUnitID;
@property (copy, nonatomic) NSString *creatorId;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (copy, nonatomic) NSArray *adModels;
@property BOOL viewDidLoaded;
@property BOOL hasShowLiteWebView;
@property (nonatomic) unsigned long long loadState;
@property (nonatomic) unsigned long long newLoadState;
@property (retain, nonatomic) BDARVIndicatorView *loadingView;
@property (nonatomic) double requestLoadingShowTime;
@property (nonatomic) long long videoRetryCount;
@property (nonatomic) BOOL disableSessionDeactive;
@property (nonatomic) BOOL disableSessionBeactive;
@property (nonatomic) BOOL isClosedByButton;
@property (nonatomic) BOOL showStatusBar;
@property (nonatomic) BOOL shouldConfigStatusBar;
@property (nonatomic) long long position;
@property (nonatomic) BOOL isFallBack;
@property (nonatomic) BOOL isLynx;
@property (nonatomic) BOOL isPlayerPreload;
@property (nonatomic) long long currentResolution;
@property (nonatomic) long long rewardIndex;
@property (nonatomic) long long rewardOneMore;
@property (retain, nonatomic) BDARewardedVideoAdConfig *config;
@property (retain, nonatomic) BDARFirstFrameTime *firstFrameTime;
@property (nonatomic) unsigned long long netStatus;
@property (nonatomic) unsigned long long lynxStatus;
@property (nonatomic) double stayBegin;
@property (copy, nonatomic) NSDictionary *playerStatusInfoAtPause;
@property (nonatomic) unsigned long long adType;
@property (retain, nonatomic) BDARVNativeAlert *backVC;
@property (nonatomic) BOOL isVertical;
@property (copy, nonatomic) NSString *liveRoomId;
@property (nonatomic) BOOL isDataPreload;
@property (retain, nonatomic) BDARVPlayerManager *playerManager;
@property (copy, nonatomic) NSString *rewardInfo;

+ (id)alertWithSource:(id)a0 delegate:(id)a1 shouldLoad:(BOOL)a2 isVertical:(BOOL)a3;
+ (id)initWithSource:(id)a0 delegate:(id)a1 shouldLoad:(BOOL)a2;

- (void)resumeVideo;
- (void)videoMonitorWithEvent:(id)a0;
- (void)backToNative;
- (id)initWithSource:(id)a0 delegate:(id)a1 shouldLoad:(BOOL)a2 isVertical:(BOOL)a3;
- (void).cxx_destruct;
- (void)pauseVideo;

@end

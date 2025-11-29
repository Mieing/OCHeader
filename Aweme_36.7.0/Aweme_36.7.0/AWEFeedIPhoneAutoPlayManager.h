@class NSArray, NSDictionary, NSString, NSMutableArray;

@interface AWEFeedIPhoneAutoPlayManager : NSObject <AWEFeedIPhoneAutoPlayManagerProtocol>

@property (retain, nonatomic) NSDictionary *settingDic;
@property (retain, nonatomic) NSMutableArray *recentlyPlayItemIDs;
@property (nonatomic) int continuousDeclineCount;
@property (retain, nonatomic) NSArray *canOpenPageDic;
@property (nonatomic, getter=isAutoPlayOpen) BOOL autoPlayOpen;
@property (nonatomic) BOOL pictureInPictureOpen;
@property (nonatomic) unsigned long long guideStrategy;
@property (readonly, nonatomic) int liveStandingSecond;
@property (readonly, nonatomic) int commerceStandingSecond;
@property (readonly, nonatomic) int cardStandingSecond;
@property (readonly, nonatomic) BOOL enableOpenGuideBottomNotification;
@property (readonly, copy, nonatomic) NSString *openGuideBottomNotificationText;
@property (readonly, nonatomic) BOOL enablePictureInPicture;
@property (readonly, nonatomic) BOOL enableDeviceStationaryDetection;
@property (readonly, nonatomic) long long deviceStationaryDetectionThreshold;
@property (readonly, nonatomic) double deviceStationaryDetectSensitivity;
@property (readonly, nonatomic) long long deviceStationaryDetectInterval;
@property (readonly, nonatomic) BOOL enablePauseWhenScrollToNext;
@property (readonly, nonatomic) BOOL hasBeenOpened;
@property (readonly, nonatomic) BOOL canShowOpenGuideBottomNotification;
@property (nonatomic) BOOL didShowOpenGuide;
@property (nonatomic) BOOL didShowOpenGuideBottomNotification;
@property (nonatomic) BOOL didShowCloseGuide;
@property (nonatomic) BOOL didManualCloseOpenGuideBottomNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;

- (void)setFeedIphoneAutoPlayState:(BOOL)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)autoPlayEnableWithReferString:(id)a0;
- (long long)feedAutoPlayStyle;
- (BOOL)autoPlayEnable;
- (BOOL)showCloseGiudeIfNeed:(id)a0 isUserDrag:(BOOL)a1 referString:(id)a2;
- (void)initializeAutoPlayState;
- (BOOL)inherentStateIfNeed;
- (BOOL)getLastAutoPlayState;
- (void)setPictureInPicture:(BOOL)a0;
- (void)setHasBeenOpened:(BOOL)a0;
- (void)saveAutoPlayState;
- (long long)openGuideBottomNotificationIntervalHour;
- (BOOL)isExpiredForHour:(long long)a0 timestamp:(double)a1;
- (BOOL)homepageMediumEnable;
- (long long)longPressPanelOrder;
- (void)resetContinuousDeclineCount;
- (BOOL)getFeedIphoneAutoPlayState;
- (void).cxx_destruct;

@end

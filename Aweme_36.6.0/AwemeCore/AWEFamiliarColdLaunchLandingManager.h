@class NSString;

@interface AWEFamiliarColdLaunchLandingManager : NSObject <AWEFamiliarColdLaunchLandingManagerProtocol>

@property (nonatomic) BOOL hasShowedMaskView;
@property (nonatomic) BOOL isShowingMaskView;
@property (nonatomic) BOOL quicklySlideGuideMaskHasShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)appWillTerminate;
- (unsigned long long)getFamiliarLandingUnreadNumPullType;
- (long long)getFamiliarLandingUnreadNumCount;
- (void)addPitayaLandingVideoPlayTrackParamsTo:(id)a0;
- (void)maskViewInFeedCellDidDismiss;
- (void)maskViewInFeedCellDidShow;
- (void)quicklySwipeGuideMaskHasShowed;
- (void)clearHasShowedMaskView;
- (void)recordEnterFriendsTabInAppCycle;
- (BOOL)isNeverEnterFriendsTabInAppCycle;
- (void)p_recordFamiliarLandingUnreadNumInfo;
- (id)init;

@end

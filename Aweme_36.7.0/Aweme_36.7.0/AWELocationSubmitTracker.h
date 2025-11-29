@class NSString;

@interface AWELocationSubmitTracker : NSObject <AWELocationSubmitTrackerProtocol>

@property (nonatomic) long long videoPlayMaxCount;
@property (nonatomic) BOOL locationSubmitIsOn;
@property (nonatomic) BOOL needAppPopup;
@property (nonatomic) BOOL currentVideoIsAds;
@property (nonatomic) BOOL alertViewIsOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)p_ifLocationAlertShowed;
- (BOOL)p_ifSystemLocationAlertShowed;
- (void)showLocationAlert;
- (void)showSystemLocationAlert;
- (void)p_setLocationAlertShowed;
- (void)p_setSystemLocationAlertShowed;
- (void)addVideoPlayedCount:(id)a0 isAds:(BOOL)a1;
- (BOOL)userHasAuthrizedLocation;
- (id)init;

@end

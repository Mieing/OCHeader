@class NSString;

@interface AWELocallyPrivacyManager : NSObject <AWEUserMessage>

@property (nonatomic) BOOL isFetchedPrivacySettings;
@property BOOL fetchingPrivacySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showLocallyPrivacyToast:(id)a0 notShownBlock:(id /* block */)a1;
+ (BOOL)__isSameCityCode:(id)a0;
+ (BOOL)__didMeetFrequencyControl;
+ (BOOL)displayedToast;
+ (BOOL)shouldShowLocallyPrivacyWithModel:(id)a0;
+ (id)toastMessage;
+ (void)markDisplayed;
+ (void)fetchPrivacySettingsInfoWithCompleted:(id /* block */)a0;
+ (id)__dateMark;
+ (void)__clearMarkCaches;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)init;
- (void)dealloc;

@end

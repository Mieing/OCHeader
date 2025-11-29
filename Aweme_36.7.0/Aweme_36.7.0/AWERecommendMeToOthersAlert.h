@class NSString;

@interface AWERecommendMeToOthersAlert : NSObject <DUXSheetDelegate, AWEAlertProtocol>

@property (nonatomic) unsigned long long triggerScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)satifiedInteval;
+ (void)updateAlertShowCounts;
+ (void)updateLastAlertShowDate;
+ (BOOL)satifiedShowConditions;
+ (BOOL)lessThanMaxCounts;
+ (BOOL)satifiedValueChangedInteval;
+ (id)lastAlertShowDate;
+ (long long)alertShowCounts;
+ (id)closeRecommendMeToOthersDate;
+ (void)updateCloseRecommendMeToOthersDate;
+ (void)resetStorage;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (double)showTimeoutWithContext:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)onAlertCanceled;
- (id)trackScene;
- (void)didClickOpen;
- (void)didClickReject;
- (void)trackAlertEvent:(id)a0;
- (BOOL)enableGuide;
- (id)content;
- (id)title;

@end

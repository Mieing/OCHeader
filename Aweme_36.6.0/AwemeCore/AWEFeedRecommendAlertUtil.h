@interface AWEFeedRecommendAlertUtil : NSObject

@property (nonatomic) BOOL showing;

+ (id)noticeSettings;
+ (id)sharedInstance;

- (BOOL)canShow;
- (BOOL)coldLaunch;
- (void)setColdLaunch:(BOOL)a0;
- (void)onPersonalRecommendChanged:(id)a0;
- (void)appEnterForground;
- (void)openSucceed;
- (void)openFailed;
- (void)close;
- (id)init;
- (void)didDismiss;
- (void)didShow;

@end

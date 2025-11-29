@interface AWEMVBootTrackManager : NSObject

@property (nonatomic) BOOL hadStart;

+ (id)sharedInstance;

- (void)setupNotification;
- (void)onAppDidActive;
- (void)trackForBackGroundSettingStatus;
- (id)init;

@end

@interface BDPLaunchOptSettingsConfig : NSObject

@property (nonatomic) BOOL gestureOpt;
@property (nonatomic) BOOL displayOpt;
@property (nonatomic) BOOL animOpt;
@property (nonatomic) double animDuration;

+ (id)sharedInstance;

- (id)init;

@end

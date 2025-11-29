@class NSDate;

@interface AWEStartUpManager : NSObject

@property (retain, nonatomic) NSDate *firstTimeStartUpDate;
@property (nonatomic) BOOL isStartUpFirstTime;
@property (nonatomic) BOOL isAppVersionUpdated;
@property (nonatomic) BOOL isSystemBackgroundLaunch;

+ (BOOL)isAwemeVideoPlayGuideViewShowing;
+ (void)resetStartUpFirstTime;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end

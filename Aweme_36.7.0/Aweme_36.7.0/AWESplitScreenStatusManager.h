@class NSString, NSDate;

@interface AWESplitScreenStatusManager : NSObject <AWEPadSystemSplitScreenService, AWEPadSplitScreenStatusDelegate>

@property (nonatomic) double currentWidth;
@property (nonatomic) double currentHeight;
@property (nonatomic) long long currentShowType;
@property (nonatomic) long long lastShowType;
@property (retain, nonatomic) NSDate *beginTime;
@property (readonly, nonatomic) double currentWidthResolution;
@property (readonly, nonatomic) double currentHeightResolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)stringForCurrentShowType;
- (void)updateSplitScreenStatus;
- (long long)showTypeWithWindowWidth:(double)a0 windowHeight:(double)a1;
- (void)trackScreenModeChange;
- (id)showTypeString:(long long)a0;
- (id)stringForWindowRatio;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end

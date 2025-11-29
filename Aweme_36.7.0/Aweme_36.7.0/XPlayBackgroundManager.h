@interface XPlayBackgroundManager : NSObject

@property (nonatomic) BOOL isBackground;

+ (id)sharedInstance;

- (void)_selectTTAirPlayApplication:(id)a0;
- (id)init;

@end

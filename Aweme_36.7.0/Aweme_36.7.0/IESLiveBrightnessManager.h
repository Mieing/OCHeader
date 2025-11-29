@interface IESLiveBrightnessManager : NSObject

@property (nonatomic) int brightness;

+ (id)shareInstance;

- (void)p_addObserver;
- (void)p_removeObserver;
- (int)getScreenBrightness;
- (void)handleBrightnessChangeNotification;
- (id)init;
- (void)dealloc;

@end

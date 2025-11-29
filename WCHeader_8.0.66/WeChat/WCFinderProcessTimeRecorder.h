@interface WCFinderProcessTimeRecorder : NSObject

@property (nonatomic) BOOL observed;
@property (nonatomic) unsigned long long enterTime;
@property (copy, nonatomic) id /* block */ onEnterBackground;

- (id)init;
- (void)dealloc;
- (void)setupNotifications;
- (void)removeNotifications;
- (void)onVCEnterBackground;
- (void)onVCEnterForeground;
- (unsigned long long)currentTime;
- (void).cxx_destruct;

@end

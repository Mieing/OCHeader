@interface IESECWebImageNetHelper : NSObject

@property BOOL inRunning;
@property long long netQuality;

+ (id)sharedInstance;

- (void)updateCurrentNetConnectType;
- (void)registerNetConnectionTypeChangeNotification;
- (void)onNetConnectionTypeChange:(id)a0;
- (void)dealloc;
- (void)startIfNeeded;

@end

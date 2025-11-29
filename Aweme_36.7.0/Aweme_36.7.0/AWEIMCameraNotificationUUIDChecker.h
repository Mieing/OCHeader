@class NSMutableDictionary;

@interface AWEIMCameraNotificationUUIDChecker : NSObject

@property (retain, nonatomic) NSMutableDictionary *observersMap;

+ (void)markAddObserver:(id)a0 withSessionID:(id)a1;
+ (BOOL)isEnableWithSessionID:(id)a0 forTarget:(id)a1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;

@end

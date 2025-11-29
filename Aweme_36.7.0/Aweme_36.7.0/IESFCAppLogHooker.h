@class NSDictionary;

@interface IESFCAppLogHooker : NSObject

@property (nonatomic) BOOL enableHook;
@property (retain, nonatomic) NSDictionary *eventMap;

+ (void)hookAppLogEvents;
+ (id)sharedInstance;

- (void)onEventV3:(id)a0 parameter:(id)a1;
- (id)buildEventMap;
- (void)hookAppLogEvents;
- (void).cxx_destruct;
- (id)init;

@end

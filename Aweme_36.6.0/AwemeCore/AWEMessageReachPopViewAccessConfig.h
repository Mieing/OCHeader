@class NSString;

@interface AWEMessageReachPopViewAccessConfig : NSObject <AWEMessageReachPopViewAccessProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (BOOL)antiAddictPopViewAccessEnable;
- (double)popViewKillAppTimeInterval;
- (double)popViewShowTimeOurInterval;

@end

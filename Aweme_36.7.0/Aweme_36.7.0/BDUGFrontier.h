@class NSString;

@interface BDUGFrontier : NSObject <BDUGFrontierProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setWay:(long long)a0;
+ (void)setMethodID:(long long)a0;
+ (void)setTTPushManager:(id)a0;
+ (void)setUpdateFrontierSettingLimitTime:(double)a0;
+ (void)trackPushClearEventWithFrontierPayLoad:(id)a0;
+ (void)trackPushClearEventWithPayLoad:(id)a0;
+ (void)setSessionID:(id)a0;
+ (void)setServiceID:(long long)a0;
+ (id)sharedInstance;
+ (void)setToken:(id)a0;

- (void)onReceiveMessage:(id)a0;
- (void)unReuseFrontier;
- (void)start;

@end

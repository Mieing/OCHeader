@class NSString;

@interface FlutterMMPlatformPlugin : NSObject <MMFlutterPlugin, FlutterPlatformChannel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)getAppVersionWithError:(id *)a0;
- (void)lightVibrateForce:(BOOL)a0 error:(id *)a1;
- (void)mediumVibrateForce:(BOOL)a0 error:(id *)a1;
- (id)isScreenOnWithError:(id *)a0;
- (id)getWeChatRevisionWithError:(id *)a0;

@end

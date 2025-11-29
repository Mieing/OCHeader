@class NSString;

@interface FlutterMMDevKitPlugin : NSObject <MMFlutterPlugin, FlutterMMDevKitHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)enableMMDevKitWithError:(id *)a0;

@end

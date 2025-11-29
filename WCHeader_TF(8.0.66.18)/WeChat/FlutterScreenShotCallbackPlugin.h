@class NSString, FlutterMethodChannel;

@interface FlutterScreenShotCallbackPlugin : NSObject <MMFlutterPlugin>

@property (retain, nonatomic) FlutterMethodChannel *screenShotChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onAttachedToEngine:(id)a0;
- (void)handleSceenShot;
- (void)onDetachedFromEngine:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end

@class NSString;

@interface FLTWebViewFlutterPlugin : NSObject <FlutterPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (void)detachFromEngineForRegistrar:(id)a0;

@end

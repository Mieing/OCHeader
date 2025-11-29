@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface MMLiteAppPlatformViewPlugin : NSObject <FlutterPlugin>

@property (weak, nonatomic) NSObject<FlutterBinaryMessenger> *messenger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (void)instanceRegisterWithRegistrar:(id)a0;
- (void).cxx_destruct;

@end

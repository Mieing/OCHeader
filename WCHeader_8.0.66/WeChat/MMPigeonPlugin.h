@class NSString;

@interface MMPigeonPlugin : NSObject <FlutterPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;

@end

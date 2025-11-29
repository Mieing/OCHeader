@class NSString;

@interface FlutterCrashReportPlugin : NSObject <FlutterPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (id)initWithRegistrar:(id)a0 methodChannel:(id)a1;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;

@end

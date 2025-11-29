@class NSString;

@interface FlutterExptPluginImpl : NSObject <MMFlutterPlugin, FlutterExptHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (id)getRequest:(id)a0 error:(id *)a1;

@end

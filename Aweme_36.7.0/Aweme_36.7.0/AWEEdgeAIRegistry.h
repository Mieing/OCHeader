@class NSString;

@interface AWEEdgeAIRegistry : NSObject <EAIRegistry>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEvent:(id)a0 params:(id)a1;
- (id)appName;
- (id)config;
- (id)deviceId;
- (id)userId;
- (id)appVersion;
- (id)baseUrl;
- (id)aid;

@end

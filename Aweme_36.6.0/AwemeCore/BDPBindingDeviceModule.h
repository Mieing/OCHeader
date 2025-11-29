@class NSDictionary, NSString;

@interface BDPBindingDeviceModule : NSObject <BDPCommonBridgeModule>

@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;

@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)getNetworkType;
- (id)getSystemInfoWithView:(id)a0;
- (id)getGeneralInfo;

@end

@class NSString;

@interface AWEIMSDKPluginCallbackImpl : NSObject <IESIMLogPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)iesim_logService:(id)a0 name:(id)a1 data:(id)a2;
- (id)init;

@end

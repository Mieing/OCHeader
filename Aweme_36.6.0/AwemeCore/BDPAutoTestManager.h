@class NSString, NSMutableDictionary;

@interface BDPAutoTestManager : NSObject <BDPLaunchDispatchObjectProtocol> {
    NSMutableDictionary *_handlerMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (BOOL)openWithLaunchParam:(id)a0;
+ (void)registerDispatchObject;
+ (id)sharedInstance;

@end

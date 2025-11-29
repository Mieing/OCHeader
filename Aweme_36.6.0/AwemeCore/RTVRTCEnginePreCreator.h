@class NSString, HMDThreadSafeDictionary;

@interface RTVRTCEnginePreCreator : NSObject <ByteRTCEngineDelegate>

@property (retain) HMDThreadSafeDictionary *preloadEnginesComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preCreateMainAppIDEngine;
+ (void)clearPreCreatedEngine;
+ (void)preCreateEngineWithAppid:(id)a0;
+ (id)getPreloadEngineAndTransformPointer:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end

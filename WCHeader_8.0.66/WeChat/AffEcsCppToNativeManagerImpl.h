@class NSString;

@interface AffEcsCppToNativeManagerImpl : NSObject <AffEcsCppToNativeManagerBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceInitEcsEnv;

@end

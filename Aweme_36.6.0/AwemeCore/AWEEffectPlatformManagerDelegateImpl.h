@class NSString;

@interface AWEEffectPlatformManagerDelegateImpl : NSObject <AWEEffectPlatformManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldFilterEffect:(id)a0;

@end

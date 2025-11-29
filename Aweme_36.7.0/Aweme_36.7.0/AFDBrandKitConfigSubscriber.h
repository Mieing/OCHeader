@class NSString;

@interface AFDBrandKitConfigSubscriber : NSObject <AWEFamiliarSettingsSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateFamiliarSettings:(id)a0 fromRequest:(BOOL)a1;


@end

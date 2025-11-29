@class NSString;

@interface AWEPluginChooseAddressImpl : NSObject <AWEAddressDelegate, BDPAddressPluginDelegate>

@property (copy, nonatomic) id /* block */ resultCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

@end

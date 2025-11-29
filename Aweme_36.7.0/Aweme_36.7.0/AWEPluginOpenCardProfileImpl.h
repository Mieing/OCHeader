@class AWEPluginOpenCardProfileView, NSString;

@interface AWEPluginOpenCardProfileImpl : NSObject <BDPOpenCardProfileDelegate>

@property (retain, nonatomic) AWEPluginOpenCardProfileView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_openCardProfileWithInfo:(id)a0 withViewController:(id)a1 onStateChange:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isOpen;

@end

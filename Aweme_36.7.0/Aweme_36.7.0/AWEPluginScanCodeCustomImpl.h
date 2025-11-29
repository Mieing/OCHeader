@class NSString;

@interface AWEPluginScanCodeCustomImpl : NSObject <BDPScanCodePluginDelagate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_scanCodeWithModel:(id)a0 completion:(id /* block */)a1;

@end

@class NSBundle, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyBundleLoader : NSObject

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) NSBundle *sdkBundle;

- (id)initWithSupervisor:(id)a0;
- (void)setupSDKBundle;
- (id)getStringContentForResource:(id)a0 ofType:(id)a1;
- (void).cxx_destruct;

@end

@class UINavigationController, EcsOpenHook, NSString;

@interface EcsOpenContextIOSData : NSObject <EcsCoreEcsOpenContextBasePlatformInfo_Ur>

@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) EcsOpenHook *hook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

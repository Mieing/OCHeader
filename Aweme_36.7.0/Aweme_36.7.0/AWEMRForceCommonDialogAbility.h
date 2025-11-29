@class NSString, AWEMRForceNativeDialogHandler;
@protocol AWEMRForceCommonDialogPluginProtocol;

@interface AWEMRForceCommonDialogAbility : NSObject <AWEMRForceCommonDialogAbilityProtocol>

@property (weak, nonatomic) AWEMRForceNativeDialogHandler *dialogHandler;
@property (weak, nonatomic) id<AWEMRForceCommonDialogPluginProtocol> bizPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissDialogWithAnimated:(BOOL)a0 closeType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)initWithDialogHandler:(id)a0 bizPlugin:(id)a1;
- (void).cxx_destruct;

@end

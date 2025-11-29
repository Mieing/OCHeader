@class NSDictionary, NSString;
@protocol AWEMRForceCommonDialogAbilityProtocol;

@interface AWEVersionUpdateForcePopupPlugin : NSObject <AWEMRForceCommonDialogPluginProtocol>

@property (retain, nonatomic) id<AWEMRForceCommonDialogAbilityProtocol> ability;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonDialog_setAbility:(id)a0;
- (void)commonDialog_didClickMaskWithContext:(id)a0 dialogConfig:(id)a1;
- (void)commonDialog_didClickCloseBtnWithContext:(id)a0 dialogConfig:(id)a1;
- (BOOL)commonDialog_interceptClickActionWithContext:(id)a0 dialogConfig:(id)a1 buttonConfig:(id)a2;
- (BOOL)commonDialog_interceptCountDownActionWithContext:(id)a0 dialogConfig:(id)a1 buttonConfig:(id)a2;
- (id)commonDialog_paramsForEvent:(unsigned long long)a0 context:(id)a1 dialogConfig:(id)a2;
- (id)initWithConfirmAction:(id /* block */)a0 cancelAction:(id /* block */)a1 trackExtra:(id)a2;
- (void)callActionWithConfirm:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

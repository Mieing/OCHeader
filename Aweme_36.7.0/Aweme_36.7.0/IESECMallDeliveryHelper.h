@interface IESECMallDeliveryHelper : NSObject

+ (BOOL)checkUniqueIdValid:(id)a0 deliveryConfig:(id)a1;
+ (BOOL)realCheckUniqueId:(id)a0;
+ (BOOL)isEnterFromHitCheckList:(id)a0 deliveryConfig:(id)a1;
+ (BOOL)isChannelTagHitCheckList:(id)a0 deliveryConfig:(id)a1;
+ (void)showInvalidUniqueIdDialog;
+ (void)debugShowDialogTip:(id)a0 subTip:(id)a1 confirmText:(id)a2 WithCompletion:(id /* block */)a3;

@end

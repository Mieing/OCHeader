@class NSString;

@interface IESECToastServiceImpl : NSObject <IESECToastService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showNetWeak;
+ (void)showWithText:(id)a0 iconView:(id)a1;
+ (void)showHUD:(id)a0;
+ (void)show:(id)a0;
+ (void)showError:(id)a0;
+ (void)showSuccess:(id)a0;


@end

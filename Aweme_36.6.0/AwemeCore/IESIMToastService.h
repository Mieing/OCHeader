@class NSString;

@interface IESIMToastService : HTSService <IESIMToastService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showNetWeak;
- (void)showText:(id)a0 onView:(id)a1;
- (void)showWithText:(id)a0 iconView:(id)a1;
- (void)showWithText:(id)a0 style:(unsigned long long)a1 iconView:(id)a2;
- (id)createToastWithStyle:(unsigned long long)a0 text:(id)a1 iconView:(id)a2;
- (unsigned long long)convertToastStyle:(unsigned long long)a0;
- (void)showText:(id)a0;

@end

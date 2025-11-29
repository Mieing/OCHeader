@class NSString;

@interface RTVDUXAlertDialogFactory : NSObject <RTVDUXAlertDialogFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionWithStyle:(unsigned long long)a0 title:(id)a1 click:(id /* block */)a2;
- (id)dialogWithBody:(id)a0 actions:(id)a1;
- (unsigned long long)__alertDialogActionUse:(unsigned long long)a0;

@end

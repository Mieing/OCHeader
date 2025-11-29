@class NSString;

@interface BDECIMDialogServiceImpl : NSObject <BDECIMDialogService_I>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showDialogWithTitle:(id)a0 content:(id)a1 confirmText:(id)a2 confirmBlock:(id /* block */)a3 cancelText:(id)a4 cancelBlock:(id /* block */)a5 showCancel:(BOOL)a6;
- (void)showDialogWithTitle:(id)a0 content:(id)a1 confirmText:(id)a2 cancelText:(id)a3 showCancel:(BOOL)a4;

@end

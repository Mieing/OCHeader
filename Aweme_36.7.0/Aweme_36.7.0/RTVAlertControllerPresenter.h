@class NSString;

@interface RTVAlertControllerPresenter : NSObject <RTVAlertControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentAlertControllerOn:(id)a0 title:(id)a1 message:(id)a2 confirmActionTitle:(id)a3 confirmActionHandler:(id /* block */)a4 cancelActionTitle:(id)a5 cancelActionHandler:(id /* block */)a6;

@end

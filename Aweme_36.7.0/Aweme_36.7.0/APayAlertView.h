@class NSString, UIAlertView, UIViewController;
@protocol APayAlertViewDelegate;

@interface APayAlertView : NSObject <UIAlertViewDelegate> {
    long long _totalIndex;
}

@property (retain, nonatomic) UIAlertView *alertView;
@property (retain, nonatomic) UIViewController *alertContrller;
@property (retain, nonatomic) UIViewController *bottomContrller;
@property (nonatomic) long long cancelButtonIndex;
@property (weak, nonatomic) id<APayAlertViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationEnterBackground:(id)a0;
- (void)internal_init;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)show;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void)alertView:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)initWithTitle:(id)a0 message:(id)a1 delegate:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4;
- (long long)actionWithTitle:(id)a0 style:(long long)a1;

@end

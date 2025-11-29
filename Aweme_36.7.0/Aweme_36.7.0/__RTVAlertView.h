@class NSString, AWEUIAlertView, NSMutableArray;

@interface __RTVAlertView : NSObject <RTVAlertViewConfigable>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) AWEUIAlertView *alertView;
@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)showOnView:(id)a0;
- (void)addActionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
- (void)__showOnView:(id)a0;
- (void)dismissWithoutCancelAction;
- (void).cxx_destruct;
- (void)show;
- (void)dismiss:(BOOL)a0;

@end

@class AWECheckBoxAlertDialogBodyView, NSString;

@interface AWECheckBoxAlertDialog : NSObject <DUXAlertDialogDelegate>

@property (class, readonly, nonatomic) BOOL isShowing;

@property (retain, nonatomic) AWECheckBoxAlertDialogBodyView *body;
@property (nonatomic) unsigned long long currentAction;
@property (copy, nonatomic) NSString *cancelActionTitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL showCheckBox;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (copy, nonatomic) id /* block */ checkBoxAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidDismiss:(id)a0;
- (void)didClickCheckBox;
- (void)setCheckBoxText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)show;

@end

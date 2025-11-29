@class DUXButton, DUXDivider;

@interface AWEDislikePanelBottomView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) DUXDivider *line;
@property (retain, nonatomic) DUXButton *submitButton;
@property (retain, nonatomic) DUXButton *cancelButton;
@property (copy, nonatomic) id /* block */ submit;
@property (copy, nonatomic) id /* block */ cancel;

- (void)didClickCancel;
- (void)setCancelText:(id)a0;
- (void)didClickedSubmit;
- (id)initWithType:(unsigned long long)a0 submit:(id /* block */)a1 cancel:(id /* block */)a2;
- (void)setSubmitText:(id)a0;
- (void)hideLine:(BOOL)a0;
- (void)showSumitButton:(BOOL)a0 completion:(id /* block */)a1;
- (void)showCancelButton:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end

@class NSString, NSMutableArray, HTSLiveBlockDialog;

@interface IESLiveCreateRoomBlockAlertView : UIView <UITextViewDelegate>

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) HTSLiveBlockDialog *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShow;
- (void)showWithInfo:(id)a0;
- (void)clickCloseBtn:(id)a0;
- (id)parseDisplayText:(id)a0 fontSize:(double)a1;
- (void)clickActionBtn:(id)a0;
- (void)trackClickSource:(long long)a0;
- (void)showNormalWarningWithInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)init;

@end

@class NSString, UIView;

@interface IESLiveTextCorrectionTipsView : UIView

@property (retain, nonatomic) NSString *hintWord;
@property (nonatomic) struct CGPoint { double x; double y; } arrowPoint;
@property (nonatomic) BOOL atTop;
@property (copy, nonatomic) id /* block */ confirm;
@property (copy, nonatomic) id /* block */ cancel;
@property (copy, nonatomic) id /* block */ dismiss;
@property (retain, nonatomic) UIView *content;

- (void)showOnView:(id)a0;
- (void)executeConfirm;
- (void)executeDismiss;
- (void)executeCancel;
- (id)initWithHintWord:(id)a0 arrowPoint:(struct CGPoint { double x0; double x1; })a1 atTop:(BOOL)a2 confirm:(id /* block */)a3 cancel:(id /* block */)a4 dismiss:(id /* block */)a5;
- (void).cxx_destruct;

@end

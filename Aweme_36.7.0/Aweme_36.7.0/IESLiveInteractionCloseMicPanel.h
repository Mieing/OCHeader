@class UIImageView, NSString;

@interface IESLiveInteractionCloseMicPanel : UIView

@property (nonatomic) BOOL neverRemind;
@property (retain, nonatomic) UIImageView *neverRemindCircle;
@property (nonatomic) BOOL useOneTitle;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)onCancelButtonClicked;
- (void)layoutUI:(id)a0;
- (double)fitLength:(double)a0;
- (void)onCloseMicButtonClicked;
- (void)onNeverRemindButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchorName:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 cancelText:(id)a2 confirmText:(id)a3;
- (void).cxx_destruct;

@end

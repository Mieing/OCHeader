@class UIImageView;

@interface IESLiveCommunityInteractCloseMicPanel : UIView

@property (nonatomic) BOOL neverRemind;
@property (retain, nonatomic) UIImageView *neverRemindCircle;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)onCancelButtonClicked;
- (void)layoutUI:(id)a0;
- (double)fitLength:(double)a0;
- (void)onCloseMicButtonClicked;
- (void)onNeverRemindButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchorName:(id)a1;
- (void).cxx_destruct;

@end

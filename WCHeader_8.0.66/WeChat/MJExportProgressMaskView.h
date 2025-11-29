@class MMUIButton;
@protocol MJExportProgressMaskViewDelegate;

@interface MJExportProgressMaskView : WCProgressMaskView

@property (retain, nonatomic) MMUIButton *cancelButton;
@property (weak, nonatomic) id<MJExportProgressMaskViewDelegate> mj_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupCancelButton;
- (void)cancelButtonDidTouchUpInside:(id)a0;
- (void)enableCancelAction;
- (void)disableCancelAction;
- (void).cxx_destruct;

@end

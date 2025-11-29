@class ACCEditAIFakeProgressView, UIButton;

@interface AWEAIImageExpandLoadingView : UIView

@property (retain, nonatomic) ACCEditAIFakeProgressView *fakeProgressView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void)startFakeProgress;
- (void)endFakeProgress;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)cancelAction:(id)a0;

@end

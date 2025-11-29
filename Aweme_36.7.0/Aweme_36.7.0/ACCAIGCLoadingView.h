@class ACCEditAIFakeProgressView, UILabel;

@interface ACCAIGCLoadingView : UIView

@property (retain, nonatomic) ACCEditAIFakeProgressView *fakeProgressView;
@property (retain, nonatomic) UILabel *keywordLabel;

- (void)startFakeProgress;
- (void)endFakeProgress;
- (void)updateKeyWord:(id)a0;
- (void)endFakeProgressWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

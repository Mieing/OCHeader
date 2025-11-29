@class NSLayoutConstraint;

@interface MJImagePanel : UIView {
    NSLayoutConstraint *_heightConstraint;
}

@property (readonly, nonatomic) BOOL isEditingPanel;
@property (nonatomic) double panelHeight;
@property (nonatomic) BOOL isRootPanel;
@property (copy, nonatomic) id /* block */ translateYHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)processRenderTapWithLayer:(id)a0 events:(unsigned long long)a1;
- (id)delegateBySubclass;
- (void)startLoadingWithText:(id)a0 disableInteraction:(BOOL)a1;
- (void)stopLoadingWithText:(id)a0 success:(BOOL)a1;
- (void)stopLoading;
- (void).cxx_destruct;

@end

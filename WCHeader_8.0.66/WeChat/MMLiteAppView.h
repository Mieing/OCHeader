@class MMLiteAppViewController, LiteAppStore;

@interface MMLiteAppView : UIView {
    LiteAppStore *_store;
    id /* block */ _onBodySizeChangeBlock;
    BOOL _autoHeight;
    BOOL _autoWidth;
    BOOL _disableScroll;
}

@property (retain, nonatomic) MMLiteAppViewController *vc;
@property (nonatomic) BOOL isRealAppear;
@property (nonatomic) BOOL disableLayoutSubview;

- (id)init;
- (void)dealloc;
- (void)attachLiteAppView:(id)a0 path:(id)a1 page:(id)a2 query:(id)a3 signatureKey:(id)a4 isTransparent:(BOOL)a5 startReport:(id)a6 reporter:(id)a7;
- (void)attachLiteAppView:(id)a0;
- (void)onAttachViewController:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getStore;
- (void)setStore:(id)a0;
- (void)setOnBodySizeChangeBlock:(id /* block */)a0;
- (void)setAutoHeight:(BOOL)a0;
- (void)setAutoWidth:(BOOL)a0;
- (void)updateByUIWindow:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)didMoveToWindow;
- (void)attachParentViewController;
- (id)findViewController;
- (void)setContentOffset:(double)a0;
- (void)disableScroll:(BOOL)a0;
- (void)layoutSubviews;
- (void)pauseView;
- (void)resumeView;
- (void).cxx_destruct;

@end

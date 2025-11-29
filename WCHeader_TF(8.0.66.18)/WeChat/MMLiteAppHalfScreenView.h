@class MMLiteAppHalfScreenViewController;

@interface MMLiteAppHalfScreenView : MMLiteAppView

@property (retain, nonatomic) MMLiteAppHalfScreenViewController *halfScreenVC;
@property (nonatomic) BOOL isRealAppear;
@property (nonatomic) double heightPercent;
@property (nonatomic) BOOL enablePullUp;
@property (nonatomic) BOOL enablePullDown;
@property (nonatomic) BOOL enableFullscreenPullDown;
@property (nonatomic) BOOL withMask;
@property (nonatomic) BOOL landscape;
@property (nonatomic) BOOL autoRotate;
@property (nonatomic) BOOL fullscreenEnter;

- (id)init;
- (void)attachLiteAppView:(id)a0 path:(id)a1 page:(id)a2 query:(id)a3 signatureKey:(id)a4 isTransparent:(BOOL)a5 startReport:(id)a6 reporter:(id)a7;
- (void)attachLiteAppView:(id)a0;
- (void)dealloc;
- (void)innerAttachLiteAppView:(id)a0;
- (void)onAttachViewController:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateByUIWindow:(id)a0;
- (void)removeFromSuperview;
- (void)willMoveToWindow:(id)a0;
- (void)didMoveToWindow;
- (void)attachParentViewController;
- (id)findViewController;
- (void)layoutSubviews;
- (void)scrollToTop;
- (void)scrollToBottom;
- (void)scrollToResume;
- (void)setTitleBackgroundColor:(unsigned long long)a0 darkMode:(BOOL)a1 pageId:(unsigned long long)a2;
- (void).cxx_destruct;

@end

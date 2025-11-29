@class NSString, MMKV;

@interface AWEPadFullPageAdapter : NSObject <AWEPadFullPageAdapter>

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)updateLayoutForRotate;
- (void)updateAvatarView;
- (void)updateHeaderVCLayout;
- (void)performViewDidlayoutSubviews;
- (struct CGSize { double x0; double x1; })commentCellSize;
- (void)dismissCommeneLongPressAlert;
- (double)marginWithView:(id)a0;
- (id)updateFooterLayoutWithAttributes:(id)a0 view:(id)a1;
- (BOOL)performAnimateWithComplition:(id /* block */)a0;
- (BOOL)shouldShowTopAvatarViewAndInputView;
- (void)addGestureForContaienr;
- (void)shouldReponseToPinchWithComplition:(id /* block */)a0;
- (void)performShowBullbleInHangOutChannel:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullPageSliderFrameWithView:(id)a0;
- (double)commentContainerWidthWithView:(id)a0;
- (void)performFullPageUIWithComplition:(id /* block */)a0;
- (BOOL)padPinchZoomAnimationWithTargetView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setHasShowBubbleKeyToTrue;
- (void).cxx_destruct;
- (id)weakTarget;

@end

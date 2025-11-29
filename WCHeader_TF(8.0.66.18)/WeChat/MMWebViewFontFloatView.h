@class NSString, UIImageView, MMStepSlider;
@protocol MMWebViewFontFloatViewDelegate;

@interface MMWebViewFontFloatView : MMUIButton <MMStepSliderDelegate> {
    UIImageView *viewBg;
    unsigned int m_uiFontType;
    unsigned int m_uiMaxLevel;
    MMStepSlider *m_slider;
    BOOL m_bAnimating;
}

@property (weak, nonatomic) id<MMWebViewFontFloatViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mmSliderViewChange:(unsigned int)a0;
- (void)onClose;
- (id)initWithFontType:(unsigned int)a0 maxLevel:(unsigned int)a1 attachToView:(id)a2;
- (void)initSlider:(unsigned int)a0 maxLevel:(unsigned int)a1;
- (void)delayShow;
- (void)showUp;
- (void)slideOut;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

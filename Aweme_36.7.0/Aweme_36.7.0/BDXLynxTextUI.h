@class NSString, YYLabel, NSMutableDictionary;

@interface BDXLynxTextUI : LynxUI <UIGestureRecognizerDelegate> {
    YYLabel *_truncationLabel;
    NSMutableDictionary *_subSpan;
    NSMutableDictionary *_truncationSubSpan;
    BOOL _dirty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;

- (void)onReceiveUIOperation:(id)a0;
- (void)setAsyncDisplayFromTTML:(BOOL)a0;
- (void)configDisplaysAsynchronouslyIfNeed;
- (id)subSpanOf:(id)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)ensureSubSpan;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityText;
- (id)createView;
- (void)didRender;
- (void)frameDidChange;

@end

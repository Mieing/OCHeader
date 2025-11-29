@class NSTimer, NSMutableDictionary, NSString;

@interface AFDFamiliarTopElementContainer : UIView <CAAnimationDelegate>

@property (retain, nonatomic) NSMutableDictionary *elementsMap;
@property (retain, nonatomic) NSMutableDictionary *cachedElementsMap;
@property (nonatomic) unsigned long long currentElementType;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addElement:(unsigned long long)a0 withView:(id)a1 showCompletion:(id /* block */)a2 hideCompletion:(id /* block */)a3;
- (void)p_cacheElementIfNeeded:(unsigned long long)a0;
- (void)removeElementIfNeeded:(unsigned long long)a0;
- (void)showElement:(unsigned long long)a0 animationConfig:(id)a1;
- (void)p_removeCachedElementIfNeeded:(unsigned long long)a0;
- (void)p_startAutoHideTimerForElement:(unsigned long long)a0 animationConfig:(id)a1;
- (void)hideElement:(unsigned long long)a0 animationConfig:(id)a1;
- (unsigned long long)p_defaultShowingElementType;
- (void)hideElement:(unsigned long long)a0 animated:(BOOL)a1;
- (void)showElement:(unsigned long long)a0 animated:(BOOL)a1;
- (void)addElement:(unsigned long long)a0 withView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)resetToDefault;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)containsElement:(unsigned long long)a0;

@end

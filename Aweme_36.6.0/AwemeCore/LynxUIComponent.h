@class NSString;
@protocol LynxUIComponentLayoutObserver;

@interface LynxUIComponent : LynxUIView

@property (weak) id<LynxUIComponentLayoutObserver> layoutObserver;
@property (retain, nonatomic) NSString *itemKey;
@property (readonly, nonatomic) BOOL frameDidSet;
@property (nonatomic) long long zIndex;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__372;
+ (id)__lynx_prop_config__301;

- (void)onNodeReady;
- (void)setItemKey:(id)a0 requestReset:(BOOL)a1;
- (void)setZIndex:(long long)a0 requestReset:(BOOL)a1;
- (void)asyncListItemRenderFinished:(long long)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

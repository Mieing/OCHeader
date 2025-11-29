@class NSString, UIView;

@interface WAPlatformContainerView : UIView <FlutterPlatformView>

@property (nonatomic) BOOL disableHook;
@property (retain, nonatomic) UIView *nativeView;
@property (nonatomic) long long viewId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2;
- (void)dealloc;
- (id)view;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeHook;
- (void)addHook;
- (void)updateNativeViewFrame;
- (void).cxx_destruct;

@end

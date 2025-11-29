@interface RelaxFramework.RelaxNativeView : RelaxView <ContextProxy> {
    void /* unknown type, empty encoding */ relaxInstance;
    void /* unknown type, empty encoding */ relaxPage;
    void /* unknown type, empty encoding */ onLifeCycleCallBack;
    void /* unknown type, empty encoding */ onMeasureCallback;
    void /* unknown type, empty encoding */ onSystemInfoStateCallbacks;
    void /* unknown type, empty encoding */ builder;
}

- (void)onDestory;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (id)initAutoCreate:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 autoCreate:(BOOL)a1;
- (id /* block */)onEventName:(id)a0 listener:(id /* block */)a1;
- (void)emitWithEventName:(id)a0 params:(id)a1;
- (void)AddSystemInfoStateCallback:(id /* block */)a0;
- (id)GetPageConfig;
- (id)GetSystemInfoState;
- (void)AddSystemInfoStateCallback:(id /* block */)a0 returnType:(id)a1;
- (void)SetContextLifeCycleCallback:(id /* block */)a0;
- (void)SetOnMeasureCallback:(id /* block */)a0;
- (void)SchedulePlatformLayout;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBuilder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end

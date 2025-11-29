@interface RelaxFramework.RelaxNativeView : RelaxView {
    void /* unknown type, empty encoding */ relaxInstance;
    void /* unknown type, empty encoding */ relaxPage;
}

- (id)initAutoCreate:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 autoCreate:(BOOL)a1;
- (id /* block */)onEventName:(id)a0 listener:(id /* block */)a1;
- (void)emitWithEventName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBuilder:(id)a0;
- (void)dealloc;

@end

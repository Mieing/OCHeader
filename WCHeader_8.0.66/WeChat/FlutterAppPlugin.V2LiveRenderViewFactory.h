@interface FlutterAppPlugin.V2LiveRenderViewFactory : NSObject <FlutterPlatformViewFactory, FlutterAppPlugin.V2LiveRenderViewDelegate> {
    void /* unknown type, empty encoding */ messenger;
    void /* unknown type, empty encoding */ viewMap;
}

- (id)createWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2;
- (void)destroyRenderViewWithViewId:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end

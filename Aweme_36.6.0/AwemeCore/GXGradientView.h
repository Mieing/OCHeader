@class NSArray;

@interface GXGradientView : UIView {
    BOOL _isDynamic;
}

@property (retain, nonatomic) NSArray *colors;

+ (Class)layerClass;

- (id)colorRefs;
- (void)setupGradientWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 locations:(id)a2 colors:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;

@end

@class NSSet;

@interface PerfAnalysisFluncyPlugin : PerfAnalysisPlugin {
    BOOL _scrollingFlag;
    BOOL _willDisplayFlag;
    double _ioThres;
    double _imageThres;
    double _viewThres;
    double _transformThres;
    double _hangThres;
    NSSet *_delegateBlocklist;
}

+ (id)swizzled_dataWithJSONObject:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)swizzled_JSONObjectWithData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (long long)swizzled_writeJSONObject:(id)a0 toStream:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)swizzled_JSONObjectWithStream:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)swizzled_imageNamed:(id)a0;
+ (id)swizzled_imageNamed:(id)a0 inBundle:(id)a1 compatibleWithTraitCollection:(id)a2;
+ (id)swizzled_imageWithData:(id)a0;
+ (id)swizzled_imageWithCGImage:(struct CGImage { } *)a0;
+ (id)swizzled_unarchiveObjectWithData:(id)a0;
+ (id)swizzled_unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (BOOL)swizzled_conformsToProtocol:(id)a0;
+ (id)name;

- (void)onScrollDidEnd;
- (void)initThres;
- (void)initBlocklist;
- (void)hookScrollView;
- (void)hookNSUserDefaults;
- (void)hookAWEStorage;
- (void)hookNSJSONSerialization;
- (void)hookMTLJSONAdapter;
- (void)hookCALayer;
- (void)hookUIView;
- (void)hookUIViewController;
- (void)hookUIImage;
- (void)hookHang;
- (void)fishhook;
- (void)setThresholdForAction:(id)a0;
- (void)swizzle_scrollViewDelegate:(id)a0;
- (void)swizzled_setDelegate:(id)a0;
- (void)onScrollDidBegin;
- (BOOL)swizzled_synchronize;
- (id)swizzled_objectForKey:(id)a0;
- (void)swizzled_setObject:(id)a0 forKey:(id)a1;
- (void)swizzled_awe_setObject:(id)a0 forKey:(id)a1 err:(id *)a2;
- (id)swizzled_awe_objectForKey:(id)a0;
- (id)swizzled_modelFromJSONDictionary:(id)a0 error:(id *)a1;
- (id)swizzled_JSONDictionaryFromModel:(id)a0 error:(id *)a1;
- (void)swizzled_renderInContext:(struct CGContext { } *)a0;
- (void)swizzled_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame_swizzled:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)swizzled_drawViewHierarchyInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 afterScreenUpdates:(BOOL)a1;
- (id)swizzled_snapshotViewAfterScreenUpdates:(BOOL)a0;
- (id)initWithNibName_swizzled:(id)a0 bundle:(id)a1;
- (void)swizzled_viewDidLoad;
- (id)initWithData_swizzled:(id)a0;
- (void)swizzled_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blendMode:(int)a1 alpha:(double)a2;
- (void)swizzled_drawAtPoint:(struct CGPoint { double x0; double x1; })a0 blendMode:(int)a1 alpha:(double)a2;
- (id)swizzled_resizableImageWithCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 resizingMode:(long long)a1;
- (void)swizzled_enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)swizzled__sendInvocation:(id)a0 orArguments:(id *)a1 count:(long long)a2 methodSignature:(id)a3 selector:(SEL)a4 withProxy:(id)a5;
- (double)thresholdInScene:(id)a0 action:(id)a1;
- (void).cxx_destruct;
- (void)onLoad;

@end

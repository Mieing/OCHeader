@class NSDictionary, NSString;
@protocol RxInjector;

@interface RTVVoipVideoPreviewLayout : NSObject <RTVVoipVideoPreviewLayout>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, copy, nonatomic) NSDictionary *lastSnapshotsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)layoutPreviews:(id)a0 lastPreviews:(id)a1 lastSnapshotsMap:(id)a2 animated:(BOOL)a3;
- (id)snapshotImageAfterScreenUpdate:(id)a0;
- (id)__keyFromPreview:(id)a0;
- (id)__previewCompletionLayoutFrames:(id)a0;
- (BOOL)__isCornerNailedWithFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })__LBPointOfCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)__isLBPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)__viewFRFrames:(id)a0 lastPreviews:(id)a1;
- (id)__viewTOFrames:(id)a0 lastPreviews:(id)a1;
- (id)__previewMapperWithPreviews:(id)a0 lastPreviews:(id)a1;
- (id)__newAnimatorWithAnimation:(id /* block */)a0;
- (void)__setupPreviews:(id)a0 withParams:(id)a1;
- (id)__layoutInfoWithPreviews:(id)a0 lastPreviews:(id)a1;
- (void)__layoutPreviews:(id)a0 lastPreviews:(id)a1 withInfo:(id)a2 animated:(BOOL)a3;
- (id)__snapshotImageAfterScreenUpdate:(id)a0;
- (id)__snapshotImageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (void).cxx_destruct;

@end

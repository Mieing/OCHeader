@class NSString, UIView, NLEInterface_OC;

@interface AFDMCEditServiceImpl : NSObject <AFDMCEditService>

@property (retain, nonatomic) NLEInterface_OC *nleSession;
@property (copy, nonatomic) NSString *currentBrushSlodId;
@property (weak, nonatomic) UIView *videoPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exportVideoWithCompletion:(id /* block */)a0;
- (void)getProcessedPreviewImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 compeletion:(id /* block */)a2;
- (void)resetPlayerWithView:(id)a0;
- (id)nleEditSession;
- (void)afterProcessedBrushImageWithCompletion:(id /* block */)a0;
- (BOOL)isPreviewProcessedWithPainted;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)setSession:(id)a0;

@end

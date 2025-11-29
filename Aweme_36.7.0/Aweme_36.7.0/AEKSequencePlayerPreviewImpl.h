@class AEKSequencePlayerScrollView, AEKSequencePlayerContainer, NSString, UIView, ACCRepositoryWorkspace;
@protocol AEKSequencePlayerBusinessDelegate;

@interface AEKSequencePlayerPreviewImpl : NSObject <AEKDiffChangeSubscriber, AEKSequencePlayerPreview>

@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) AEKSequencePlayerScrollView *scrollView;
@property (weak, nonatomic) AEKSequencePlayerContainer *container;
@property (nonatomic) long long displayMode;
@property (nonatomic) double containerScale;
@property (nonatomic) double canvasRatio;
@property (nonatomic) BOOL enableAdaptPreview;
@property (retain, nonatomic) UIView *snapshot;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } standFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AEKSequencePlayerBusinessDelegate> businessDelegate;

- (void)diffResults:(id)a0 fromSource:(unsigned long long)a1;
- (id)initWithWorkspace:(id)a0 container:(id)a1 standFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)addScrollViewToContainer;
- (void)addCanvasDiffSubscriberIfNeeded;
- (void)setupDisplayMode:(long long)a0;
- (void)prepareForAdaptPreview;
- (void)adaptPreviewByDisplayMode:(long long)a0;
- (long long)checkDisplayMode;
- (void).cxx_destruct;
- (double)currentScale;

@end

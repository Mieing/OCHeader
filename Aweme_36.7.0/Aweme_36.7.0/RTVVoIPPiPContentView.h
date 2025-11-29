@class NSString, UIVisualEffectView, RTVVoipParticipator, UIView, RTVPreviewView;
@protocol RTVPIPControllerInterface, RxInjector, RTVXRControllerInjector, RTVXREngine;

@interface RTVVoIPPiPContentView : UIView <RTVXREngineDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVPIPControllerInterface> PiPController;
@property (retain, nonatomic) RTVPreviewView *preview;
@property (retain, nonatomic) RTVPreviewView *deputyPreview;
@property (retain, nonatomic) UIView *previewSnapshotView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (nonatomic) BOOL isClosingTransition;
@property (nonatomic) BOOL isDeputyPreviewFront;
@property (weak, nonatomic) id<RTVXREngine> xrEngine;
@property (readonly, nonatomic) RTVVoipParticipator *participator;
@property (readonly, nonatomic) RTVVoipParticipator *deputyParticipator;
@property (readonly, nonatomic) BOOL isVoIPHangup;
@property (nonatomic) BOOL layoutWithPipStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__layoutComponents;
- (void)__createComponnets;
- (void)xrEngine:(id)a0 didLeaveRoom:(id)a1;
- (void)configWithParticipator:(id)a0 deputyParticipator:(id)a1 session:(id)a2;
- (void)addPreviewSnapshotIfNeedWithStyle:(long long)a0;
- (void)exchangeViewhierarchyWithCornerRadius:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutWithFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__defaultNarrowViewFrame;
- (void)removePreviewSnapshotIfNeed;
- (void)adjustFrameForPreview:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustFrameForDeputyPreview:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustBlur:(double)a0;
- (void)adjustAlphaForPreview:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

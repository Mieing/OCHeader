@class DVEVCContext, NSString;
@protocol DVEEditingRuntimeProtocol, ACCAEViewContainerProtocol, IESServiceProvider, DVEMulitpleTrackViewServiceProtocol, DVEMultipleTrackViewModelRegister;

@interface ACCAdvanceEditPageServiceImpl : NSObject <ACCAdvanceEditPageService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<DVEMultipleTrackViewModelRegister> multipleTrackVMRegister;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (nonatomic) BOOL storedOriginalFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } controlBarFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainTrackFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } multiTrackFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)moveToUpWithPanelHeight:(double)a0 visible:(unsigned long long)a1;
- (void)moveToUpWithPanelHeight:(double)a0 visible:(unsigned long long)a1 animated:(BOOL)a2;
- (void)moveToUpWithPanelHeight:(double)a0 visible:(unsigned long long)a1 animationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)hideVisible:(unsigned long long)a0;
- (void)showVisible:(unsigned long long)a0;
- (void)pinToCurrentAudioSlot;
- (double)controlBarVisiblePanelHeight;
- (double)previewVisiblePanelHeight;
- (double)previewMoveTopVisiblePanelHeight;
- (void)togglePreviewInteraction:(BOOL)a0;
- (void)moveToUpWithPanelHeight:(double)a0 visible:(unsigned long long)a1 animated:(BOOL)a2 animationBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)storeFrameIfNeeded;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end

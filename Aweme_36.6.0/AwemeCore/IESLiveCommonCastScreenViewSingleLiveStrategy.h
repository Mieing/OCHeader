@class IESLiveCommonCastScreenView, NSString;

@interface IESLiveCommonCastScreenViewSingleLiveStrategy : IESLiveCommonCastScreenViewBaseStrategy <IESLiveCastScreenViewDelegate>

@property (retain, nonatomic) IESLiveCommonCastScreenView *castScreenView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeCommonCastScreenElementView;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)castScreenReturnButtonDidClick;
- (struct CGSize { double x0; double x1; })p_castCameraSize;
- (double)p_castCameraRightPadding;
- (double)p_castCameraBottomPadding;
- (void)showCommonCastScreenElementViewIfNeed:(BOOL)a0;
- (void)castScreenViewDidChangeUIStatus:(long long)a0;
- (void)castScreenViewDidClickStop;
- (BOOL)castScreenViewShouldShowSmallWindowView;
- (BOOL)castScreenShouldHideEndButton;
- (struct CGPoint { double x0; double x1; })castScreenInitializePosition;
- (void)updateCommonCastScreenElementViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)startCastWithCompletion:(id /* block */)a0;
- (void)stopCastWithCompletion:(id /* block */)a0;
- (void)setupCastScreenView:(id /* block */)a0;
- (void)restoreCameraPreview;
- (void).cxx_destruct;

@end

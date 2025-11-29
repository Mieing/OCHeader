@class IESLiveCommonCastScreenView, NSString;

@interface IESLiveCommonCastScreenViewInteractStrategy : IESLiveCommonCastScreenViewBaseStrategy <IESLiveCastScreenViewDelegate>

@property (retain, nonatomic) IESLiveCommonCastScreenView *castScreenView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTopContainerHidden:(BOOL)a0;
- (void)closeCommonCastScreenElementView;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)castScreenReturnButtonDidClick;
- (void)showCommonCastScreenElementViewIfNeed:(BOOL)a0;
- (void)castScreenViewDidChangeUIStatus:(long long)a0;
- (void)castScreenViewDidClickStop;
- (BOOL)castScreenViewShouldShowSmallWindowView;
- (void)updateCommonCastScreenElementViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)startCastWithCompletion:(id /* block */)a0;
- (void)stopCastWithCompletion:(id /* block */)a0;
- (void)setupCastScreenView:(id /* block */)a0;
- (void).cxx_destruct;

@end

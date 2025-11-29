@class NSString, AWEShareHotSearchModel, AWEUILoadingView, UIView;
@protocol AWEHotSearchShareContainerViewProtocol;

@interface AWEShareDetailWithSpecialQRCodeHotSearchContentView : AWEShareDetailWithQRCodeBaseContentView <AWEHotSearchShareContainerViewDelegate>

@property (retain, nonatomic) AWEShareHotSearchModel *hotSearchModel;
@property (retain, nonatomic) UIView<AWEHotSearchShareContainerViewProtocol> *containerView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL hasLoadFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoading;
- (void)dismissSharePanel;
- (void)hotSearchShareContentLoadFinishWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageToSaveToAlbum;
- (void)setIsQRCodeLoaded:(BOOL)a0;
- (void)setCustomDismiss;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)dealloc;
- (void)setUpSubviews;
- (void)showLoading;
- (void)setupCustomView;

@end

@class NSString, ACCScanPhotoScanContext, UIView, AWEVideoPublishViewModel;
@protocol UIViewControllerTransitioningDelegate, ACCTextLoadingViewProtcol;

@interface AWEACCCanvasMaker : NSObject <UINavigationControllerDelegate, ACCCanvasMakerProtocol>

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (retain, nonatomic) ACCScanPhotoScanContext *scanContext;
@property (copy, nonatomic) id /* block */ customerTransitioningSetting;
@property (copy, nonatomic) id /* block */ enableAnimated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) BOOL isPureSinglePhotoCanvas;

+ (id)localMusicAssetForURL:(id)a0;
+ (void)updateWithPublishModel:(id)a0 isPureSinglePhotoCanvas:(BOOL)a1;
+ (void)configMusic:(id)a0 publishModel:(id)a1;
+ (void)updatePublishModelForDetailMusic:(id)a0 publishModel:(id)a1;
+ (void)updatePublishModelWithMVMusic:(id)a0 publishModel:(id)a1;

- (id)processImageWithBlackEdgeWithOutputSize:(struct CGSize { double x0; double x1; })a0 sourceImage:(id)a1;
- (struct CGSize { double x0; double x1; })assetResolutionConversionWithString:(id)a0;
- (void)makeCanvasWithAssetModel:(id)a0 completion:(id /* block */)a1;
- (void)makeCanvasPublishModelWithAssetModel:(id)a0 musicModel:(id)a1 completion:(id /* block */)a2;
- (void)makeCanvasWithImage:(id)a0 done:(id /* block */)a1;
- (void)makeCanvasWithImage:(id)a0 onCompletion:(id /* block */)a1;
- (void)configMusic:(id)a0;
- (void)updatePublishModel;
- (void)choseNoQrcodeAlbumInReversal;
- (void)choseNoQrcodeAlbumInQRCode;
- (void)openEditor:(id /* block */)a0;
- (void)dismissCurrentAlbumPage;
- (void).cxx_destruct;

@end

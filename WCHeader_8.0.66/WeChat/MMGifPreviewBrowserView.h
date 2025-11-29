@class UIView, NSString, NSArray, NSData, MMWebImageView, UIImageView, MMAssetInfo, MMAssetPickerBrowserStateInfo, UILabel, MMImageScrollViewHelper;
@protocol MMImagePickerControlCenter, MMAssetPickerBrowserViewDelegate;

@interface MMGifPreviewBrowserView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, IMMAssetICloudExt, MMAssetPickerBrowserViewProtocol> {
    MMWebImageView *m_gifView;
    UIView *m_gifViewBk;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    struct CGSize { double width; double height; } m_originImageSize;
    MMImageScrollViewHelper *m_scrollViewHelper;
}

@property (readonly, nonatomic) NSData *originData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double zoomScale;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (retain, nonatomic) MMAssetInfo *assetInfo;
@property (nonatomic) BOOL requestUneditedAsset;
@property (nonatomic) BOOL shouldPlayWithEditAttr;
@property (weak, nonatomic) id<MMImagePickerControlCenter> controlCenter;
@property (weak, nonatomic) id<MMAssetPickerBrowserViewDelegate> browserDelegate;
@property (readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initGifView;
- (void)showIcloudViewWithText:(id)a0 isLoading:(BOOL)a1;
- (void)loadAsset;
- (void)onFinishLoadImage:(id)a0 imageData:(id)a1;
- (void)loadThumbImage:(id)a0;
- (BOOL)updateGifViewWithData:(id)a0 originSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateGifViewFrameWithOriginSize:(struct CGSize { double x0; double x1; })a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onSingleTap:(id)a0;
- (void)onAssetImageDonwloadProgress:(double)a0 assetUrl:(id)a1;
- (void)onAssetImageDonwloadFail:(id)a0;
- (void).cxx_destruct;

@end

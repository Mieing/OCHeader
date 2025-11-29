@class NSArray, NSString, UIView;
@protocol MMAssetPickerBrowserViewProtocol;

@interface MMScreenSharingAssetBrowserController : MMUIViewController <MMAssetPickerBrowserViewDelegate>

@property (copy, nonatomic) NSArray *assetInfos;
@property (retain, nonatomic) UIView<MMAssetPickerBrowserViewProtocol> *assetView;
@property (nonatomic) double contentRatioY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAssetInfos:(id)a0;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)assetViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 assetInfo:(id)a1;
- (void)layoutAssetViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onAssetBrowserViewLoadFinished:(id)a0;
- (void)onAssetBrowserViewSingleTap:(id)a0;
- (void)onAssetBrowserViewPlayingStateChanged:(id)a0 isPlaying:(BOOL)a1;
- (void).cxx_destruct;

@end

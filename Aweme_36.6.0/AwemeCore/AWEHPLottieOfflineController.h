@class NSString, AWEHPHambListener, AWEHPLottiePreDownloadManager;

@interface AWEHPLottieOfflineController : AWEBaseController <AWEHPHomeContainerViewControllerLifeCycle>

@property (retain, nonatomic) AWEHPLottiePreDownloadManager *preDownloadManager;
@property (retain, nonatomic) AWEHPHambListener *listener;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

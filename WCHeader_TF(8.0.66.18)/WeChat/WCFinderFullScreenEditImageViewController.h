@class NSString;
@protocol WCFinderFullScreenEditImageViewControllerDelegate;

@interface WCFinderFullScreenEditImageViewController : WCFinderRootEditImageViewController <WCFinderFullScreenEditImageLayoutViewDelegate>

@property (weak, nonatomic) id<WCFinderFullScreenEditImageViewControllerDelegate> finderDelegate;
@property (nonatomic) unsigned long long enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAssets:(id)a0 images:(id)a1;
- (void)viewDidLoad;
- (void)willDisappear;
- (void)showEditImageViewOn;
- (void)onClickItemFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (BOOL)shouldSaveUnCropImages;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end

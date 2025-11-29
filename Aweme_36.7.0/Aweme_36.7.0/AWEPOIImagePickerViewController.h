@class NSArray, NSString, UIView, CAKAlbumViewController, UIButton;
@protocol AWEPOIImagePickerViewControllerDelegate;

@interface AWEPOIImagePickerViewController : UIViewController <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *selectedImages;
@property (retain, nonatomic) UIButton *nextStepButton;
@property (nonatomic) BOOL shouldShowTip;
@property (retain, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) NSArray *initialImages;
@property (nonatomic) long long maxAssetsSelectionCount;
@property (nonatomic) long long photoNumbersNotInAlbum;
@property (weak, nonatomic) id<AWEPOIImagePickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (BOOL)albumViewControllerHiddenForHeader:(id)a0;
- (void)albumViewController:(id)a0 didSelectAlbumAsset:(id)a1 sourceType:(long long)a2;
- (void)albumViewController:(id)a0 didDeselectAlbumAsset:(id)a1 sourceType:(long long)a2;
- (void)showTips;
- (void)handleFinishSelection;
- (void)handleCancelSelection;
- (id)nextStepTitle;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupHeaderView;

@end

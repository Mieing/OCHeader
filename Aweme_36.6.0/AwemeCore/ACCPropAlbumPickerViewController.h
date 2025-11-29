@class ACCGradientView;

@interface ACCPropAlbumPickerViewController : AWEPhotoPickerController

@property (retain, nonatomic) ACCGradientView *gradientView;
@property (nonatomic) BOOL shouldHideGradientView;

- (void)p_setupCollectionView;
- (void)makeConstraint;
- (void)p_setupContentView;
- (void)p_setupGradientView;
- (void)p_setupTextButtonIfNeeded;
- (void)p_setupAlbumButton;
- (void)p_setupFinishSelectionButtonIfNeeded;
- (void)showGradientBackground;
- (void)hideGradientBackground;
- (void).cxx_destruct;
- (void)setupViews;

@end

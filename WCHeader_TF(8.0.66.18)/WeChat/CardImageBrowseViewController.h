@class UIPageControl, NSString, MMImageActionSheet, MultiImageScrollView, NSMutableArray, ImageBrowseButton;
@protocol CardImageBrowseViewControllerDelegate;

@interface CardImageBrowseViewController : FullScreenViewController <MultiImageScrollViewDelegate, MMImageActionSheetDelegate>

@property (retain, nonatomic) MMImageActionSheet *imageActionSheet;
@property (retain, nonatomic) MultiImageScrollView *multiImageScrollView;
@property (retain, nonatomic) ImageBrowseButton *saveButton;
@property (retain, nonatomic) ImageBrowseButton *favButton;
@property (retain, nonatomic) ImageBrowseButton *deleteButton;
@property (retain, nonatomic) UIPageControl *pageCtrl;
@property (retain, nonatomic) NSMutableArray *imageList;
@property (nonatomic) unsigned int startIndex;
@property (weak, nonatomic) id<CardImageBrowseViewControllerDelegate> delegate;
@property (nonatomic) BOOL biSHiddenButtonTool;
@property (nonatomic) BOOL biSHiddenDeleteButton;
@property (nonatomic) BOOL biSHiddenPageCtrl;
@property (nonatomic) BOOL biSDisabledLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)resetToolView;
- (BOOL)shouldHideNavigationBar;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (long long)overrideUserInterfaceStyle;
- (BOOL)removeFromViewAfterTransition;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (void)viewWillBeInteractivePoped;
- (void)onTapDelete;
- (void)savePhotoToAlbum;
- (void)addFavItem;
- (void)deleteCardImage;
- (id)currentImage;
- (void)resetButtonToolHidden:(BOOL)a0;
- (id)imageAtPage:(unsigned int)a0;
- (id)viewAtPage:(unsigned int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onSingleTap:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)OnLongPressBegin:(id)a0;
- (void)onChangePage;
- (void)imageActionSheet:(id)a0 itemWillClicked:(id)a1;
- (BOOL)imageActionSheet:(id)a0 itemDidCustomEvent:(id)a1;
- (id)customItemsArrayForImageActionSheet:(id)a0;
- (BOOL)imageActionSheet:(id)a0 shouldShowItem:(id)a1;
- (void).cxx_destruct;

@end

@class MJMovieTextEditView, NSArray, MJActionPanelMainMenuView, UICollectionView, NSString;
@protocol MJMovieTextContentDescViewControllerDelegate;

@interface MJMovieTextContentDescViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, MJSegmentReusableViewDelegate, MJMovieTextEditViewDelegate, MJActionPanelMainMenuViewDelegate, MJMovieTextActionProtocol>

@property (retain, nonatomic) UICollectionView *thumbnailView;
@property (retain, nonatomic) MJMovieTextEditView *editView;
@property (retain, nonatomic) MJActionPanelMainMenuView *menuView;
@property (retain, nonatomic) NSArray *menuItems;
@property (retain, nonatomic) NSArray *menuItemsDisabled;
@property (weak, nonatomic) id<MJMovieTextContentDescViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAppearing;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupViews;
- (void)layoutViews;
- (void)movieTextEditViewDidChangeDisplayingText:(id)a0;
- (void)movieTextEditViewDidSelectEditText:(id)a0;
- (void)movieTextEditViewDidSelectDelete:(id)a0;
- (void)mainMenuView:(id)a0 didSelectItem:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)resetPreview;
- (void)reloadData:(id)a0;
- (void)updateOnSkimTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateOnPlaybackTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateOnIsPlayingDidChange:(BOOL)a0;
- (void)scrollThumbnailToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 animated:(BOOL)a1 showHandleBox:(BOOL)a2;
- (void).cxx_destruct;

@end

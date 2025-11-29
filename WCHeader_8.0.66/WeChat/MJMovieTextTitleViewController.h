@class MJMovieTextEditView, NSArray, MJActionPanelMainMenuView, NSString;
@protocol MJMovieTextTitleViewControllerDelegate;

@interface MJMovieTextTitleViewController : UIViewController <MJMovieTextEditViewDelegate, MJActionPanelMainMenuViewDelegate, MJMovieTextActionProtocol>

@property (retain, nonatomic) MJMovieTextEditView *editView;
@property (retain, nonatomic) MJActionPanelMainMenuView *menuView;
@property (retain, nonatomic) NSArray *menuItems;
@property (retain, nonatomic) NSArray *menuItemsDisabled;
@property (weak, nonatomic) id<MJMovieTextTitleViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAppearing;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupViews;
- (void)layoutViews;
- (void)reloadData:(id)a0;
- (void)resetPreview;
- (void)updateOnSkimTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateOnPlaybackTimeDidChange:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateOnIsPlayingDidChange:(BOOL)a0;
- (void)movieTextEditViewDidChangeDisplayingText:(id)a0;
- (void)movieTextEditViewDidSelectEditText:(id)a0;
- (void)movieTextEditViewDidSelectDelete:(id)a0;
- (void)mainMenuView:(id)a0 didSelectItem:(id)a1;
- (void).cxx_destruct;

@end

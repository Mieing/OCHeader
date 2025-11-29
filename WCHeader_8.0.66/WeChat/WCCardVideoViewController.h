@class NSString, UIImageView, MMUIWindow, SightView, SightIconView;

@interface WCCardVideoViewController : MMUIViewController <WCActionSheetDelegate>

@property (retain, nonatomic) UIImageView *originImageView;
@property (weak, nonatomic) MMUIWindow *fullScreenWindow;
@property (retain, nonatomic) NSString *videoPath;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) SightView *sightView;
@property (retain, nonatomic) SightIconView *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindow:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)longPressDidSelected;
- (void)tapDidSelected;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onSavedVideoAlbum;
- (void)clearSubviews;
- (void)tryToPlayWithVideoPath:(id)a0;
- (void)configCloseBlock:(id /* block */)a0;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end

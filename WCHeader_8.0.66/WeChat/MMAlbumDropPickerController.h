@class MMUIViewController, NSString, NSArray, UIView, UIImageView, MMUIView, NSObject, MMTableView, MMUIActivityIndicatorView;
@protocol MMAlbumDropPickerControllerDelegate, MMImagePickerControlCenter, OS_dispatch_queue;

@interface MMAlbumDropPickerController : NSObject <UITableViewDelegate, UITableViewDataSource, PHPhotoLibraryChangeObserver>

@property (weak, nonatomic) id<MMAlbumDropPickerControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *deviceAlbums;
@property (retain, nonatomic) NSString *currentAlbum;
@property (weak, nonatomic) id<MMImagePickerControlCenter> controlCenter;
@property (nonatomic) BOOL directToFirstAlbum;
@property (nonatomic) BOOL allAlbumsLoaded;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL isFirstAlbum;
@property (retain, nonatomic) NSString *waitingEntryAlbumId;
@property (weak, nonatomic) MMUIViewController *attachViewController;
@property (retain, nonatomic) MMUIView *bgView;
@property (retain, nonatomic) UIView *tableContainerView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUIView *blurView;
@property (retain, nonatomic) UIImageView *shadowImageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator;
@property (retain, nonatomic) MMUIView *dimmingView;
@property (nonatomic) BOOL hasRegisterChangeObserver;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL isQuit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 delegate:(id)a1 controlCenter:(id)a2 toFirstAlbum:(BOOL)a3;
- (void)dealloc;
- (id)titleView;
- (void)startLoadAlbum;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)dismiss;
- (void)reloadTableView;
- (void)initUI;
- (void)initAccessLimitTips;
- (void)readAlbums;
- (void)toEntryAlbum:(id /* block */)a0;
- (void)loadAllAlbums:(BOOL)a0;
- (void)selectAlbum:(id)a0;
- (void)handleSwitchShowStatus;
- (void)hideIfNeeded;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)photoLibraryDidChange:(id)a0;
- (void)registerChangeObserver;
- (void)unregisterChangeObserver;
- (void)onAlbumAssetsChange:(id)a0;
- (void)backgroundUpdateAlbums:(id)a0;
- (void)startLoadingBlocked:(BOOL)a0;
- (void)stopLoading;
- (void)safeCallOnMainThread:(id /* block */)a0;
- (void)dispatchAction:(id /* block */)a0;
- (long long)getCacheOption;
- (id)getAlbumName:(id)a0 isFirstAlbum:(BOOL)a1;
- (void).cxx_destruct;

@end

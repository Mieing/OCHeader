@class GameHaowanAlbumVideoItem, NSString, MMWebImageView, WCPlayerView;
@protocol GameVideoPreviewControllerDelegate, GameVideoPreviewDataSource;

@interface GameVideoPreviewController : GameCenterNativeVc <GameVideoEditViewControllerDelegate> {
    GameHaowanAlbumVideoItem *_videoItem;
    id /* block */ _resultBlock;
}

@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (weak, nonatomic) id<GameVideoPreviewControllerDelegate> delegate;
@property (weak, nonatomic) id<GameVideoPreviewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoItem:(id)a0 andCompletion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)goBack;
- (void)setupBottomViews;
- (void)addTagViewsToContainer:(id)a0;
- (void)goEditor;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)gameVideoEditController:(id)a0 didFinishWithFilePath:(id)a1 withExtra:(id)a2;
- (void)gameVideoEditController:(id)a0 didFailedWithError:(id)a1;
- (void)notifySucceedWithVideoInfo:(id)a0;
- (void)notifyErrorResult:(long long)a0;
- (void).cxx_destruct;

@end

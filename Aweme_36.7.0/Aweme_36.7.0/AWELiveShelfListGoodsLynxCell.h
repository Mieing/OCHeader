@class AWEPOICubeModel, NSDictionary, NSString, AWELiveLifeLynxView;

@interface AWELiveShelfListGoodsLynxCell : AWELiveShelfListGoodsCell <AWEPOICubeViewDelegate>

@property (retain, nonatomic) AWELiveLifeLynxView *lynxContentView;
@property (retain, nonatomic) AWEPOICubeModel *cubeModel;
@property (nonatomic) BOOL loadFinished;
@property (nonatomic) BOOL loadFailed;
@property (copy, nonatomic) NSDictionary *updateData;
@property (copy, nonatomic) id /* block */ lynxDataUpdateCompletion;
@property (copy, nonatomic) id /* block */ lynxCloseLiveLifeShelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContext:(id)a0;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeViewWillStartLoading:(id)a0;
- (void)cubeView:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)cubeView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)cubeViewDidFirstScreen:(id)a0;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (void)checkAndTrackerLynxHeight;
- (BOOL)enableLynxHeightTracker;
- (void)viewClosed;
- (void)viewOpen;
- (BOOL)shouldUpdateServiceTagJsonStr:(id)a0;
- (double)cellLynxMinHeight;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end

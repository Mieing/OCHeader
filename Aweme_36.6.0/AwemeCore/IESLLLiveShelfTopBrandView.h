@class NSString, NSDictionary, NSValue, IESLLLiveLynxView, LLCubeModel;

@interface IESLLLiveShelfTopBrandView : UIView <LLCubeViewDelegate>

@property (retain, nonatomic) IESLLLiveLynxView *lynxBrandView;
@property (retain, nonatomic) LLCubeModel *lynxBrandModel;
@property (copy, nonatomic) NSDictionary *updateParams;
@property (retain, nonatomic) NSValue *tempLynxBrandSize;
@property (nonatomic) BOOL lynxLoadFinished;
@property (copy, nonatomic) id /* block */ viewClickedBlock;
@property (nonatomic) double shelfHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEvent:(id)a0 param:(id)a1;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeViewWillStartLoading:(id)a0;
- (void)cubeView:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)cubeView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)cubeViewDidFirstScreen:(id)a0;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (void)viewClosed;
- (void)viewOpen;
- (void)sendShelfTopbarResumeEvent;
- (void)configEmptyViewClickedBlock:(id /* block */)a0;
- (void)configWithModel:(id)a0 pageType:(long long)a1 actionType:(unsigned long long)a2 shelfHeight:(double)a3;
- (void)updateLynxViewFrame;
- (void)viewClicked:(id)a0;
- (id)lynxTopBrandDataWithShelfModel:(id)a0 pageType:(long long)a1 actionType:(unsigned long long)a2 shelfHeight:(double)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

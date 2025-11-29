@class NSNumber, NSString, NSDictionary, IESLLLiveLynxView, LLCubeModel;

@interface IESLLLiveShelfBottomView : UIView <LLCubeViewDelegate>

@property (retain, nonatomic) IESLLLiveLynxView *lynxCartView;
@property (retain, nonatomic) LLCubeModel *lynxCartModel;
@property (nonatomic) BOOL lynxLoadFinished;
@property (nonatomic) double lynxLoadBeginTime;
@property (copy, nonatomic) NSDictionary *updateParams;
@property (nonatomic) double initBeginTime;
@property (retain, nonatomic) NSNumber *lynxViewHeight;
@property (copy, nonatomic) id /* block */ viewHeightUpdateBlock;
@property (copy, nonatomic) id /* block */ cartSessionIdUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEvent:(id)a0 param:(id)a1;
- (id)getLocalData;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeViewWillStartLoading:(id)a0;
- (void)cubeView:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)cubeView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)cubeViewDidFirstScreen:(id)a0;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (id)generateCartParamsWithModel:(id)a0 pageType:(long long)a1;
- (id)getLifeExtraInfoFromRoomData:(id)a0;
- (id)saveLocalDataToStorage:(id)a0;
- (id)createEnterpriseTabExtraFromRoomData:(id)a0 extraParams:(id)a1;
- (void)configWithModel:(id)a0 pageType:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)renderDuration;
- (double)viewHeight;

@end

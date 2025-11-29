@class NSString, AWEPOICubeModel, NSDictionary, NSValue, AWELiveLifeLynxView;

@interface AWELiveLifeGXLynxView : UIView <AWEPOICubeViewDelegate>

@property (retain, nonatomic) AWELiveLifeLynxView *lynxView;
@property (copy, nonatomic) NSString *currentUrl;
@property (retain, nonatomic) AWEPOICubeModel *lynxModel;
@property (copy, nonatomic) NSDictionary *updateParams;
@property (retain, nonatomic) NSValue *tempLynxSize;
@property (nonatomic) BOOL lynxLoadFinished;
@property (nonatomic) double lynxLoadBeginTime;
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
- (void)gx_bindData:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

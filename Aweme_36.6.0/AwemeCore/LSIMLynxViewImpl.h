@class NSString, AWEPOIIMLynxView;
@protocol LSIMLynxViewDelegate;

@interface LSIMLynxViewImpl : UIView <LSIMLynxViewProtocol, AWEPOICubeViewDelegate>

@property (retain, nonatomic) AWEPOIIMLynxView *lynxView;
@property (weak, nonatomic) id<LSIMLynxViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)getCurrentData;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeViewDidStartLoading:(id)a0;
- (void)cubeView:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)cubeView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)cubeViewDidUpdate:(id)a0;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (void)reloadViewWithLynxModel:(id)a0 extraParams:(id)a1;
- (void)updateViewWithLynxModel:(id)a0 extraParams:(id)a1;
- (void)resetViewWithLynxModel:(id)a0 extraParams:(id)a1;
- (id)initLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lynxModel:(id)a1 extraParams:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end

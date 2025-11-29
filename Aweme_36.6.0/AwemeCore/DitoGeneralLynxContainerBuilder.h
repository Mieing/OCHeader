@class NSString, NSMutableArray, DitoPageContext;
@protocol DitoLynxContainerDelegate;

@interface DitoGeneralLynxContainerBuilder : NSObject <DitoLynxContainerBuilder, AWEPOICubeViewDelegate>

@property (weak, nonatomic) DitoPageContext *inner_pageContext;
@property (retain, nonatomic) NSMutableArray *businessExtenderList;
@property (copy, nonatomic) NSString *sharedGroupName;
@property (weak, nonatomic) id<DitoLynxContainerDelegate> containerDelegate;
@property (weak, nonatomic) DitoPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPageContext:(id)a0;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)cubeViewDidFirstScreen:(id)a0;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)cubeViewDidUpdate:(id)a0;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (void)cubeView:(id)a0 onSetupLynxInfo:(id)a1;
- (void)cubeView:(id)a0 onUpdateLynxInfo:(id)a1;
- (id)bizContextWithCubeView:(id)a0;
- (id)cubeTrackParams;
- (id)lynxContainerWithVM:(id)a0 ditoNodeTag:(id)a1;
- (id)lynxContainerWithCubeModel:(id)a0 extraParams:(id)a1;
- (void)registerBusinessExtender:(id)a0;
- (id)lynxContainerFillParamsWithLynxContainer:(id)a0;
- (void)bindExtenderBDXEvent:(id)a0;
- (void).cxx_destruct;
- (id)sessionID;

@end

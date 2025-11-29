@class FaceRecogBaseViewController;
@protocol FaceRecogBaseViewDelegate;

@interface FaceRecogBaseView : MMUIView

@property (weak, nonatomic) id<FaceRecogBaseViewDelegate> delegate;
@property (weak, nonatomic) FaceRecogBaseViewController *vc;

- (void)initCancelBtn;
- (void)cancelButtonDone;
- (void)initView;
- (void)attachPreviewLayer:(id)a0;
- (void)viewDidAppear;
- (void)procedureDidStartDetectFace;
- (void)procedureDidDetectFace;
- (void)procedureDidFinish;
- (void)procedureDidFailed:(id)a0 errorTips:(id)a1 canRetry:(BOOL)a2;
- (void)setTip:(id)a0;
- (void)setTip:(id)a0 animated:(BOOL)a1;
- (void)procedureDidDoneLoading;
- (void).cxx_destruct;

@end

@class APBDTFUploadToastView;
@protocol DTFFaceViewProtocol;

@interface APBToygerViewController : DTFBaseViewController

@property (nonatomic) BOOL faceRecognitionStarted;
@property (nonatomic) BOOL isRotation;
@property (retain, nonatomic) APBDTFUploadToastView *uploadView;
@property (retain, nonatomic) id<DTFFaceViewProtocol> faceView;

- (void)setPhotinusColor:(id)a0;
- (void)showBlur:(id)a0;
- (void)handleFaceStateChange:(long long)a0 stateTips:(id)a1 actionGuideType:(long long)a2 actionGuide:(id)a3 progress:(double)a4 extInfo:(id)a5;
- (void)faceDectectComplete;
- (void)startFaceRecognition:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

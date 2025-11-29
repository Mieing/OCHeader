@class UIFont, NSString, UIView, FaceRecogRoundView, CAShapeLayer, FaceRecogResultView, MMUILabel, UIColor;
@protocol FaceRecogBaseViewDelegate;

@interface FaceRecogFlashView : FaceRecogBaseView

@property (retain, nonatomic) FaceRecogResultView *resultView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) BOOL isTitleTipAnimating;
@property (retain, nonatomic) MMUILabel *bigTipFaceTitle;
@property (retain, nonatomic) MMUILabel *bigTipAnimateTitle;
@property (retain, nonatomic) MMUILabel *businessTitleLabel;
@property (retain, nonatomic) UIView *reflectColorView;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) NSString *curErrorTip;
@property (retain, nonatomic) NSString *curMotionTip;
@property (retain, nonatomic) FaceRecogRoundView *faceRectView;
@property (nonatomic) BOOL isReflecting;
@property (nonatomic) BOOL hasEverDetectFace;
@property (weak, nonatomic) id<FaceRecogBaseViewDelegate> delegate;
@property (retain, nonatomic) NSString *businessTip;
@property (retain, nonatomic) NSString *bizButtonAtFail;
@property (retain, nonatomic) NSString *loadingTip;
@property (nonatomic) BOOL closeButtonStrongStyle;
@property (retain, nonatomic) UIFont *businessTipFont;
@property (retain, nonatomic) UIColor *businessTipColor;
@property (retain, nonatomic) UIFont *actionTipFont;
@property (nonatomic) double faceRectWidth;
@property (nonatomic) BOOL showFacePositionBox;
@property (nonatomic) BOOL isUsedInWePay;
@property (nonatomic) BOOL hideResultView;

- (id)init;
- (void)resetViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFaceFrame;
- (void)initView;
- (void)viewDidAppear;
- (void)setTip:(id)a0;
- (void)setTip:(id)a0 animated:(BOOL)a1;
- (void)initCancelBtn;
- (void)attachPreviewLayer:(id)a0;
- (void)procedureDidStartDetectFace;
- (void)procedureDidDetectFace;
- (void)procedureDidDoneLoading;
- (void)procedureDidFinish;
- (void)procedureDidFailed:(id)a0 errorTips:(id)a1 canRetry:(BOOL)a2;
- (id)currBusinessTipColor;
- (id)currBusinessTipFont;
- (void)updateLayout;
- (void)initFaceRectView;
- (void)resetColor;
- (void)setReflectColor:(unsigned int)a0;
- (void)startCirleAnimation:(long long)a0;
- (void)stopCircleAnimation;
- (void)showFinish;
- (void)cancelButtonDone;
- (void)closeButtonDone;
- (void)successAutoDone;
- (void)retryButtonDone;
- (void)onBizCustomButtonClick;
- (void)onFeedback;
- (void).cxx_destruct;

@end

@class NSString, NSDictionary, CJPayBaseLynxView, UIView, NSTimer, CJPayEnlargeView;

@interface CJPayHalfPageHybridViewController : CJPayHalfPageBaseViewController <CJPayLynxViewDelegate>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *schemaQuery;
@property (nonatomic) double contentHeight;
@property (nonatomic) long long contentHeightPercent;
@property (nonatomic) BOOL closeDouPay;
@property (retain, nonatomic) NSDictionary *sdkInfo;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) CJPayBaseLynxView *hybridView;
@property (retain, nonatomic) NSTimer *loadTimer;
@property (nonatomic) BOOL loadSuccess;
@property (nonatomic) BOOL showLoading;
@property (retain, nonatomic) CJPayEnlargeView *enlargeView;
@property (copy, nonatomic) id /* block */ exitBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (void)updateContentHeight:(double)a0;
- (id)getHalfPageBGColor;
- (id)initWithSchema:(id)a0 sdkInfo:(id)a1;
- (void)publishEventToHybrid:(id)a0 withData:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (void)startTimer;
- (void)invalidateTimer;
- (void)viewDidLoad;
- (void)dealloc;
- (void)keyboardDidShow;
- (void)keyboardDidHide;
- (double)containerHeight;
- (void)back;

@end

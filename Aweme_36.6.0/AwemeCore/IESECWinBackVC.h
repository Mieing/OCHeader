@class CAGradientLayer, NSString, IESECServiceProxy, UIImageView, UIView, FBKVOController, IESECWinContext;
@protocol IESECWinDataService, IESECWinMainScrollService, IESECWinBackService, IESECWinTabService, IESECWinFeedLinkedService, IESECWinLiveService, IESECWinSplitService, IESECWinDataStatusService;

@interface IESECWinBackVC : UIViewController <IESECWinContextProtocol> {
    UIImageView *_backImage;
    CAGradientLayer *_gradientLayer;
    double _layerHeight;
    UIView *_gradientBottomView;
    double _backViewTop;
    BOOL _isFinishFirstLoading;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalCoverRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalCoverRectTop;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalCoverRectBottom;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    BOOL _hasSetBottomOriginRectInSplit;
}

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) UIView *headerBackView;
@property (retain, nonatomic) UIView *backImageView;
@property (retain, nonatomic) UIView *spliteHeaderBackViewTop;
@property (retain, nonatomic) UIView *spliteHeaderBackViewBottom;
@property (retain, nonatomic) UIView *overLineView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *tabBackGradientView;
@property (retain, nonatomic) IESECServiceProxy<IESECWinBackService> *backService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)screenShotView:(id)a0;
- (void)configCoverImage;
- (double)fitWidth;
- (void)configSplitBackUI;
- (void)configGradientView;
- (void)requestHeaderBackView;
- (void)configSplitGradientView;
- (void)configSplitHeaderBackViewBottomFrame;
- (void)configBottomImageFrame;
- (void)setHeaderBackViewBottomOriginRectInSplit;
- (void)configBottomViewCornerRadius;
- (void)calculateHeaderBackViewGradient;
- (void)configTabBackGradientViewFrame;
- (void)configHeaderBackView:(id)a0 needLayer:(BOOL)a1;
- (void)configSplitBackImage;
- (void)configGradientBack;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (double)headerHeight;
- (void)addObserver;
- (void)viewDidLoad;
- (void)scrollViewDidScroll;
- (void)setupUI;

@end

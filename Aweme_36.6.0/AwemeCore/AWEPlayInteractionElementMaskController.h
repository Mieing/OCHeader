@class AWEBaseElement, AWEPlayInteractionElementMaskView;

@interface AWEPlayInteractionElementMaskController : AWEPlayInteractionBaseController

@property (retain, nonatomic) AWEPlayInteractionElementMaskView *maskMainView;
@property (weak, nonatomic) AWEBaseElement *authorElement;
@property (nonatomic) BOOL authorElementDidLayout;
@property (nonatomic) BOOL descElementDidLayout;
@property (nonatomic) BOOL didCalculateElementMaskType;
@property (nonatomic) BOOL isTexture;
@property (nonatomic) double leftHightPercent;
@property (nonatomic) unsigned long long maskType;

- (void)setHide:(BOOL)a0;
- (void)hiddenElementMask;
- (void)setUpMaskViewIfNeed;
- (void)playInteractionDescriptionDidClickExpand:(id)a0;
- (void)calculateElementMaskType;
- (void)setUpMaskView;
- (void)showElementMaskWhite;
- (void)showElementMaskTexture;
- (void)trackVideoMaskType;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didEndDisplaying;

@end

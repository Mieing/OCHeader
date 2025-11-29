@class UIView;
@protocol AWEAwemePlayletWaterMarkViewProtocol;

@interface AWELandscapePlayletWatermarkController : AWELandscapeInteractionBaseController

@property (retain, nonatomic) UIView<AWEAwemePlayletWaterMarkViewProtocol> *playletWaterMarkView;
@property (nonatomic) BOOL isShowed;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)didEnterLandscape;
- (void)playletWatermarkWillShow;
- (void)needAppearWithModelWithAwemeModel:(id)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end

@class UIView;
@protocol AWELongVideoWaterMarkViewProtocol;

@interface AWELandscapeLongVideoWatermarkController : AWELandscapeInteractionBaseController

@property (retain, nonatomic) UIView<AWELongVideoWaterMarkViewProtocol> *longVideoWaterMarkView;
@property (nonatomic) BOOL isShowed;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)didEnterLandscape;
- (void)needAppearWithModelWithAwemeModel:(id)a0;
- (void)longVideoWatermarkWillShow;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end

@class UIView;
@protocol AWEECGoodsFeedProductCardViewProtocol;

@interface AWEECGoodsFeedDetailCellViewController : AWEAwemeDetailCellViewController

@property (retain, nonatomic) UIView<AWEECGoodsFeedProductCardViewProtocol> *cell;
@property (nonatomic) BOOL isFirstCardFullScreen;
@property (weak, nonatomic) id immersiveGoodsCardDelegate;
@property (nonatomic) long long maxUserScorllIndex;

- (void)updateCurrentAwemeModel:(id)a0;
- (void)updateFirstCardPanPercent:(double)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)configureWithModel:(id)a0;
- (void)willDisplay;

@end

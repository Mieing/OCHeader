@class NSObject;
@protocol AWEAdPlayableController;

@interface AWEFeedPlayableCellViewController : AWEFeedCellViewController

@property (nonatomic) BOOL hasReset;
@property (retain, nonatomic) NSObject<AWEAdPlayableController> *playableController;

- (BOOL)canHandleGestureInCell:(id)a0;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)setPureMode:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didEndDisplaying;
- (void)willDisplay;

@end

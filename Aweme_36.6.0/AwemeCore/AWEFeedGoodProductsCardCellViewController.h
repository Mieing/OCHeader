@class NSString, UIViewController, AWEAVPlayerWrapper;
@protocol AWEECFeedGoodsCardViewControllerProtocol;

@interface AWEFeedGoodProductsCardCellViewController : AWEFeedCellViewController <AWEAVPlayerWrapperDelegate, AWEECFeedGoodsCardViewControllerDelegate>

@property (retain, nonatomic) UIViewController<AWEECFeedGoodsCardViewControllerProtocol> *cardViewController;
@property (retain, nonatomic) AWEAVPlayerWrapper *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerWrapper:(id)a0 didChangePlayStatus:(unsigned long long)a1;
- (void)pauseMusic;
- (void)playMusic;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)__setupUIIfNeeds;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)configureWithModel:(id)a0;
- (void)willDisplay;

@end

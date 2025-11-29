@class AWEListDataController;
@protocol AWELongVideoPlusDataControllerProtocol;

@interface AWEPlayInteractionLongVideoPlusSelectLeftElementViewModel : AWEPlayInteractionBaseElementViewModel

@property (retain, nonatomic) AWEListDataController<AWELongVideoPlusDataControllerProtocol> *longVideoPlusDataController;

- (id)getWillLoadModel;
- (void)setupObserver;
- (id)showLongVideoSelectEpisodePanelWithDelegate:(id)a0;
- (void)onPaySuccessNotification;
- (void)p_preloadIfNeeded;
- (BOOL)canAutoPlayToNext:(id)a0;
- (id)p_canAutoPlayToNextForFailReason;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end

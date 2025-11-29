@class AWEDetailManager, NSString;
@protocol AWEPlayInteractionPanelManagerProtocol;

@interface AWEPlayInteractionAnchorDetailPageHalfScreenPanelController : AWEPlayInteractionBaseController <AWEPlayInteractionAnchorDetailPageHalfScreenPanelControllerProtocol>

@property (retain, nonatomic) AWEDetailManager *detailManager;
@property (weak, nonatomic) id<AWEPlayInteractionPanelManagerProtocol> panelManager;
@property (nonatomic) BOOL genericEffectPanelShowed;
@property (nonatomic) BOOL feedReseted;
@property (nonatomic) BOOL isAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shrinkVideoWhenShowPanel:(BOOL)a0 targetHeight:(double)a1;
- (void)magnifyVideoWhenCloseCommentPanelIfNeeded:(BOOL)a0;
- (void)resizeVideoWhenDragCommentPanel:(double)a0;
- (BOOL)isPanelShowed;
- (void)openDetailHalfScreenPanelWithDetailViewController:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end

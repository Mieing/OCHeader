@class DVETrackPanelContext, DVEMediaTimelineView;
@protocol ACCAdvanceEditViewModelProtocol, DVEMulitpleTrackViewServiceProtocol, DVEMultipleTrackControllerDelegate;

@interface ACCAdvanceEditTimeLineController : UIViewController

@property (weak, nonatomic) DVETrackPanelContext *vcContext;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (retain, nonatomic) DVEMediaTimelineView *timeLineView;
@property (weak, nonatomic) id<DVEMultipleTrackControllerDelegate> multipleTrackDelegate;

- (void)setupObserve;
- (BOOL)shouldSelectMainSegmentWhenLoad;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupData;

@end

@class NSString, AFDStoryDiverseDiggElementView, AFDStoryDiverseDiggElementViewModel;

@interface AFDStoryDiverseDiggElement : AWEPlayInteractionBaseElement <AFDStoryDiverseDiggElementViewDelegate, AFDStoryPlayInteractionElementProtocol>

@property (retain, nonatomic) AFDStoryDiverseDiggElementView *contentView;
@property (retain, nonatomic) AFDStoryDiverseDiggElementViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)scrollViewWillBeginDragging;
- (void)didShowFastReplyInputView;
- (void)didShowDiverseDiggWithModel:(id)a0;
- (void)didClickFastReplyWithModel:(id)a0;
- (void)didClickDiverseDiggWithModel:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (id)buildDiverseDiggContext;
- (double)elementWidthWithAweme:(id)a0;
- (void).cxx_destruct;
- (id)animationController;
- (void)applicationDidEnterBackground;
- (unsigned long long)elementType;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)context;
- (void)setupUI;
- (unsigned long long)elementPosition;

@end

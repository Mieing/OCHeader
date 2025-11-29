@class AWESearchEventDispather, DUXPopover, AWEGeneralSearchVideoCardModel, NSString, NSDictionary, NSMutableArray;
@protocol AWESearchBusinessVideoPlayerComponentProvider, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchContinuePlayComponent : AWESearchComponent <DUXPopoverDelegate, AWESearchContinuePlayComponentProvider>

@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (retain, nonatomic) DUXPopover *continuePlayPopover;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (weak, nonatomic) id<AWESearchBusinessVideoPlayerComponentProvider> playerProvider;
@property (nonatomic) BOOL isHasKeyPharaseView;
@property (nonatomic) BOOL isHasBottomContainer;
@property (nonatomic) BOOL isHastextExtraction;
@property (nonatomic) BOOL isHasAIAbstract;
@property (nonatomic) BOOL isSingleTappedActive;
@property (nonatomic) BOOL isPauseToPlay;
@property (nonatomic) BOOL continuePlayPopoverShow;
@property (nonatomic) BOOL needResumeInteractorAfterTripleSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)popoverDidDisappear:(id)a0;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (id)hintLabelStringWithTime:(double)a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (id)provideProtocol;
- (id)receiveProtocolList;
- (id)p_context;
- (void)videoPlayerViewSingleTappedAction;
- (void)playStatusButtonDidClick;
- (void)tripleSpeedStart;
- (void)tripleSpeedEnd;
- (BOOL)searchVideoContinueTagSettings;
- (BOOL)generalSearchVideoContinuePlayAb;
- (id)hintPopover:(id)a0 withPlayTime:(double)a1;
- (void)removeContinuePlayPopover;
- (void)continuePlayingVideoIfNeed;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (id)progressComponent;
- (void).cxx_destruct;

@end

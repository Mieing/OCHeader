@class NSString, AWEAwemeModel, AWEMateBigCardContainerView, AWEMateBigCardViewModel, AWEAwemePageContext;
@protocol AFDSpecialCardPanelTrackDelegate, AWEPlayInteractionViewControllerProtocol;

@interface AWEMateBigCardPanelViewController : UIViewController <AWEMateBigCardPanelViewDelegate, AFDSpecialCardPanelProtocol> {
    AWEAwemeModel *model;
    AWEAwemePageContext *outerPageContext;
    NSString *referString;
    id<AWEPlayInteractionViewControllerProtocol> interactionDelegate;
}

@property (retain, nonatomic) AWEMateBigCardContainerView *cardView;
@property (retain, nonatomic) AWEMateBigCardViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFDSpecialCardPanelTrackDelegate> trackDelegate;

- (id)referString;
- (void)setReferString:(id)a0;
- (id)outerPageContext;
- (void)setOuterPageContext:(id)a0;
- (void)didClickCard:(id)a0;
- (void)didClickActionBtn:(id)a0;
- (void)didClickDislikeBtn:(id)a0;
- (id)model;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)setInteractionDelegate:(id)a0;
- (id)interactionDelegate;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didEndDisplaying;
- (void)updateWithModel:(id)a0;
- (void)willDisplay;

@end

@class MultipleTextStateCardView, CContact, MMUIViewController, TextStateCompositeCardView, NSString, MMUIButton, TextStatePrivacyMgr;

@interface TextStateCardPageSheetViewController : MMWindowViewController <TextStateBaseCardContentViewDelegate, MultipleTextStateCardViewDataSource, MultipleTextStateCardViewDelegate, WCStatusViewDelegate>

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) MMUIButton *backgroundMaskButton;
@property (readonly, nonatomic) TextStateCompositeCardView *cardView;
@property (retain, nonatomic) MultipleTextStateCardView *multipleCardView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) TextStatePrivacyMgr *shareScopeMgr;
@property (nonatomic) BOOL shouldReportExposeCurrentStatusCardOnAppear;
@property (weak, nonatomic) MMUIViewController *delegateViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initData;
- (void)initReport;
- (void)updateLayout;
- (void)show;
- (void)hide;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)hideWithStopMedia:(BOOL)a0 preventMinimize:(BOOL)a1;
- (void)hideWithStopMedia:(BOOL)a0 preventMinimize:(BOOL)a1 completion:(id /* block */)a2;
- (id)topViewController;
- (id)targetViewController;
- (void)onTapBackgroundMaskButton;
- (void)onTapCloseButton;
- (void)onTapPositionButton:(id)a0;
- (void)onTapFavoriteButton:(id)a0 isSelected:(BOOL)a1;
- (void)onTapSelfFavoriteButton:(id)a0;
- (void)onTapCommentButton:(id)a0;
- (void)doSourceAction:(id)a0;
- (void)doHeadImageAction:(id)a0;
- (void)onTapTopic:(id)a0 cardContentView:(id)a1;
- (void)onTapBackground:(id)a0;
- (void)onTapRedEnvelopeButton:(id)a0;
- (void)onLongPress:(id)a0 isDown:(BOOL)a1;
- (void)onMultipleTextStateCard:(id)a0 didMoveFromCard:(id)a1 toCard:(id)a2;
- (void)configureSingleCardView:(id)a0 forMultipleCardView:(id)a1;
- (void)onWCStatusViewShowGroup:(id)a0 view:(id)a1;
- (void).cxx_destruct;

@end

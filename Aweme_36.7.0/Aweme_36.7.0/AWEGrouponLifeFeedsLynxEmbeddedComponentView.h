@class UIStackView, AWEGrouponLifeFeedsLynxItem, AWEGrouponLifeFeedsLynxEmbeddedComponentVM, NSString, UIView, LynxView, AWEGrouponLifeFeedsLynxCard, AWEGrouponLifeFeedsLynxEmbeddedCard, AWEGrouponLifeFeedsLynxPlugin;

@interface AWEGrouponLifeFeedsLynxEmbeddedComponentView : AWEGrouponLifeFeedsBaseComponentView <AWEImageMonitorDelegate, AWEGrouponLifeFeedsLynxCardDelegate, AWEGrouponLifeFeedsLynxCardLifeCycleProtocol, AWEGrouponLifeFeedsLynxPropertyProtocol>

@property (nonatomic) double cardTotalHeight;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AWEGrouponLifeFeedsLynxEmbeddedCard *embeddedCard;
@property (retain, nonatomic) AWEGrouponLifeFeedsLynxCard *recommendCard;
@property (readonly, nonatomic) AWEGrouponLifeFeedsLynxPlugin *lynxPlugin;
@property (weak, nonatomic) AWEGrouponLifeFeedsLynxEmbeddedComponentVM *lynxViewModel;
@property (retain, nonatomic) AWEGrouponLifeFeedsLynxItem *lynxViewItem;
@property (nonatomic) double lynxHeightBeforeBindData;
@property (nonatomic) double lynxHeightAfterUpdate;
@property (nonatomic) BOOL canEmbeddedOnScreen;
@property (nonatomic) BOOL canRecommendCardOnScreen;
@property (readonly, nonatomic) double measuredHeight;
@property (readonly, nonatomic) BOOL isLynxReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, weak, nonatomic) LynxView *lynxView;
@property (readonly, weak, nonatomic) UIView *cardView;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)findViewWithName:(id)a0;
- (void)stopPlay;
- (void)startPlay;
- (void)bindViewModel:(id)a0;
- (id)feedbackModelWithLongPress:(id)a0;
- (BOOL)showingAfterRecommend;
- (id)hostViewIfItIsLongPressed:(id)a0;
- (id)afterRecommendViewIfItIsLongPressed:(id)a0;
- (id)afterRecommendModelFromData:(id)a0;
- (void)didReceiveMonitor:(id)a0 attributes:(id)a1 extra0:(id)a2 extra1:(id)a3;
- (void)bindActionAndState;
- (void)cardWillActivate:(id)a0;
- (void)cardWillReuse:(id)a0;
- (void)cardWillCreate:(id)a0;
- (void)card:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)card:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)card:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cardDidUpdate:(id)a0;
- (void)clearCardView:(id)a0;
- (id)cardTypeFromRecommendData;
- (id)feedbackDataFromRecommendDataWithHeight:(double)a0 cardType:(id)a1;
- (id)cardRawDataFromRecommendData;
- (id)hostCardInfoFromRecommendModel:(id)a0 cardType:(id)a1 height:(double)a2;
- (void)dormancyCard:(id)a0;
- (void)setupCard:(id)a0;
- (void)updateCardFrame;
- (void)addFeedRefreshOptForCard:(id)a0;
- (void)trackCardLoadResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (BOOL)canPlay;
- (void)dealloc;

@end

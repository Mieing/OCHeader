@class AWELifeFeedsLynxItem, NSString, AWELifeFeedsLynxPlugin, UIView, AWELifeFeedsLynxComponentVM;
@protocol AnnieXContainerBaseProtocol;

@interface AWELifeFeedsLynxComponentView : AWELifeFeedsBaseComponentView <AWEImageMonitorDelegate>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *cardView;
@property (readonly, nonatomic) AWELifeFeedsLynxPlugin *lynxPlugin;
@property (weak, nonatomic) AWELifeFeedsLynxComponentVM *lynxViewModel;
@property (retain, nonatomic) AWELifeFeedsLynxItem *lynxViewItem;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) BOOL isLynxReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)clearCardView:(id)a0;
- (id)cardTypeFromRecommendData;
- (id)feedbackDataFromRecommendDataWithHeight:(double)a0 cardType:(id)a1;
- (id)cardRawDataFromRecommendData;
- (id)hostCardInfoFromRecommendModel:(id)a0 cardType:(id)a1 height:(double)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (BOOL)canPlay;
- (void)dealloc;

@end

@class NSString, NSDictionary, AWEAwemeModel, UIView, BDXBridgeEventSubscriber;
@protocol AnnieXContainerBaseProtocol, AWEShowLongVideoHighLightsPanelViewDelegate, AnnieXCardModelProtocol;

@interface AWEShowLongVideoHighLightsPanelView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *fromPage;
@property (nonatomic) double currentPlaybackTimeInSec;
@property (weak, nonatomic) id<AWEShowLongVideoHighLightsPanelViewDelegate> delegate;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *containerView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) double initTimeInterval;
@property (retain, nonatomic) NSDictionary *lastUpdatedData;
@property (retain, nonatomic) BDXBridgeEventSubscriber *panelCloseSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *highLightClickSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *likeClickSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *commentClickSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *favouriteClickSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *shareSubscriber;
@property (nonatomic) BOOL canUpdateData;
@property (nonatomic) BOOL shouldUpdateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)dataSourceHasUpdated;
- (void)updatePanelWithAwemeModel:(id)a0 currentPlaybackTimeInSec:(double)a1;
- (id)initWithAwemeModel:(id)a0 referString:(id)a1 enterMethod:(id)a2 fromPage:(id)a3 delegate:(id)a4;
- (id)getDataDic;
- (void).cxx_destruct;
- (void)setupUI;
- (void)addObservers;

@end

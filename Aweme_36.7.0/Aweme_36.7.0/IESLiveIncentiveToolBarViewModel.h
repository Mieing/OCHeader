@class NSDictionary, BDXBridgeEventSubscriber;
@protocol IESLiveIncentiveToolBarDelegate;

@interface IESLiveIncentiveToolBarViewModel : NSObject

@property (retain, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) id<IESLiveIncentiveToolBarDelegate> toolBarDelegate;
@property (retain, nonatomic) BDXBridgeEventSubscriber *eventSubscriber;

- (void)tapItem:(long long)a0;
- (id)initWithTimerDelegate:(id)a0 trackParams:(id)a1;
- (void)p_addOpenTaskPanelServer;
- (void)p_openTaskPanel;
- (void).cxx_destruct;
- (void)dealloc;

@end

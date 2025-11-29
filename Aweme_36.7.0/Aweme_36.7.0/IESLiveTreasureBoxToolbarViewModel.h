@class NSDictionary, BDXBridgeEventSubscriber;
@protocol IESLiveTreasureBoxToolBarDelegate;

@interface IESLiveTreasureBoxToolbarViewModel : NSObject

@property (retain, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) id<IESLiveTreasureBoxToolBarDelegate> boxDelegate;
@property (retain, nonatomic) BDXBridgeEventSubscriber *eventSubscriber;

- (void)tapItem:(long long)a0;
- (id)initWithTimerDelegate:(id)a0 trackParams:(id)a1;
- (void)p_addOpenTaskPanelServer;
- (void)p_openTaskPanel;
- (id)p_schemaString:(id)a0 byAppendingQueryParams:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end

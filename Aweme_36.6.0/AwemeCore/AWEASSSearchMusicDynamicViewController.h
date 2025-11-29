@class NSMutableDictionary, NSString, BDXBridgeEventSubscriber, UIView, AWEDynamicPatchModel;
@protocol AWESearchDynamicContainerViewProtocol;

@interface AWEASSSearchMusicDynamicViewController : UIViewController <AWEDynamicSearchMusicManagerDelegate, ACCASSSearchMusicDynamicViewControllerProtocol>

@property (retain, nonatomic) UIView<AWESearchDynamicContainerViewProtocol> *containerView;
@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (retain, nonatomic) BDXBridgeEventSubscriber *bridgeEventSubscriber;
@property (copy, nonatomic) id /* block */ dismissKeyboard;
@property (retain, nonatomic) NSMutableDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowEvent;
- (void)removeLynxEventObservers;
- (void)addLynxEventObservers;
- (void)sendApplicationPauseEvent;
- (void)sendReloadEventWithParams:(id)a0;
- (void)sendStopMusicEventWithParams:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)updateModel:(id)a0;

@end

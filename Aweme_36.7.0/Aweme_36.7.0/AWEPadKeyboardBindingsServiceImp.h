@class AWEPadKeyboardBindingsTipsView, NSArray, NSMutableDictionary, NSMutableSet, NSDictionary, AWEPadKeyboardKeyPressInfo, NSString;

@interface AWEPadKeyboardBindingsServiceImp : NSObject <AWEAlertProtocol, AWEPadKeyboardBindingsService>

@property (nonatomic) BOOL hasKeyboardConnect;
@property (retain, nonatomic) NSMutableDictionary *innerKeyOperationMap;
@property (retain, nonatomic) NSArray *keyCommands;
@property (retain, nonatomic) NSMutableSet *responseFilters;
@property (nonatomic) BOOL tipsDidShowed;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) id /* block */ userGuidViewDidShowBlk;
@property (copy, nonatomic) id /* block */ userGuidViewNeedShowBlk;
@property (nonatomic) BOOL isIgnoreCurrentPress;
@property (readonly, nonatomic) NSDictionary *keyOperationMap;
@property (retain, nonatomic) AWEPadKeyboardKeyPressInfo *lastPressInfo;
@property (weak, nonatomic) AWEPadKeyboardBindingsTipsView *tipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showWithCloseCallback:(id /* block */)a0;
- (void)performKeyboardBindingsExecute:(id /* block */)a0;
- (void)regesterResponseFilter:(id)a0 filter:(id /* block */)a1;
- (void)regesterKey:(id)a0 discoverabilityTitle:(id)a1 target:(id)a2 click:(id /* block */)a3 doubleClick:(id /* block */)a4 longPressBegin:(id /* block */)a5 longPressEnd:(id /* block */)a6;
- (void)showUserGuidViewIfNeed:(id /* block */)a0 didShow:(id /* block */)a1;
- (void)ignoreCurrentPressEvent;
- (id)createProgressControl;
- (void)addKeyboardConnectNotifications;
- (void)showTipsIfNeed;
- (void)onKeyboardDidConnectNotification:(id)a0;
- (void)onKeyboardDidDisconnectNotification:(id)a0;
- (void)removeWithKey:(id)a0 target:(id)a1;
- (BOOL)shouldIgnoreCurrentPressEvent;
- (BOOL)canResponseForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

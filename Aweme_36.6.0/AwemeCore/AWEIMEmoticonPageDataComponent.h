@class NSString, NSMutableDictionary;
@protocol AWEIMEmoticonPageMapComponent, AWEIMEmoticonPanelDataComponent, AWEIMEmoticonTabDataComponent, AWEIMEmoticonPanelBoxComponent, AWEIMEmoticonPanelSyncComponent, AWEIMEmoticonDefaultLandingComponent;

@interface AWEIMEmoticonPageDataComponent : AWEIMComponentBase <AWEIMEmoticonPageDataComponent>

@property (weak, nonatomic) id<AWEIMEmoticonTabDataComponent> tabDataComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelDataComponent> panelDataComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPageMapComponent> pageMapComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelBoxComponent> boxComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (weak, nonatomic) id<AWEIMEmoticonDefaultLandingComponent> defaultLandingComponent;
@property (retain, nonatomic) NSMutableDictionary *pageDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)reloadThemeInfoArray:(id)a0;
- (void)p_handlePanelDataChanged:(id)a0;
- (void)p_formatPageArrayWithThemeInfoArray:(id)a0;
- (void)p_reloadSelection;
- (void).cxx_destruct;

@end

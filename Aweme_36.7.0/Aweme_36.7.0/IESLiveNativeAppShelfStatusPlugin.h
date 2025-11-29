@class IESLiveNativeAppShelfStatusViewController, ShelfTradeData, NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppShelfStatusPlugin : NSObject <IESLiveNativeAppShelfStatusPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveNativeAppShelfStatusDelegate, IESHYControllerDelegate> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (weak, nonatomic) IESLiveNativeAppShelfStatusViewController *statusVC;
@property (retain, nonatomic) ShelfTradeData *tradeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)iesHYControllerDidDismiss:(id)a0;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)nativeAppShelfInfoDidChange:(id)a0 oldVersion:(id)a1;
- (void)openShelfStatusVCWithSource:(id)a0;
- (void)dismissStatusVCIfNeeded:(id /* block */)a0;
- (void)updateTradeData:(id)a0;
- (void)trackFrequencyPush;
- (void)manageButtonDidClick;
- (void)couponButtonDidClick;
- (void)cardDidUpdateExplainStatus:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)nativeAppShelfStatusVC:(id)a0 didSelectCardInfo:(id)a1;
- (void)didSelectIconOrTitleWithShelfInfo:(id)a0;
- (void)nativeAppShelfStatusVC:(id)a0 couponInfoBlock:(id /* block */)a1;
- (void)couponButtonDidShowAtStatusVC:(id)a0;
- (void).cxx_destruct;
- (id)pluginContext;

@end

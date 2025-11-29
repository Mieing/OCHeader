@class IESLiveNativeAppShelfManageViewController, NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppShelfManagerPlugin : NSObject <IESLiveNativeAppShelfManagerPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveNativeAppShelfManageDelegate> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (weak, nonatomic) IESLiveNativeAppShelfManageViewController *managerVC;
@property (nonatomic) BOOL useNewUE;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)nativeAppShelfInfoDidChange:(id)a0 oldVersion:(id)a1;
- (void)dismissManagerVCIfNeeded:(id /* block */)a0;
- (void)openShelfManagerVCWithSource:(id)a0 isMounted:(BOOL)a1;
- (void)goBackToSquareOrBeforeLivePage;
- (void)goBackToBeforeLivePage;
- (BOOL)hasSameCardInfo:(id)a0;
- (void)saveCardManageResult:(id)a0;
- (void)modifyShelfInfo:(id)a0;
- (void)manageCompleteWithShelfInfo:(id)a0;
- (void)tryToModifyShelfInfo:(id)a0 oldShelfInfo:(id)a1 completeBlock:(id /* block */)a2;
- (id)getTitleWithCardInfo:(id)a0;
- (void)couponButtonDidShow:(id)a0;
- (void)couponButtonDidClickWithShelfInfo:(id)a0 couponInfo:(id)a1;
- (void)manageViewControllerDidClickAddMore:(id)a0;
- (void)manageDidDeletedToShelfInfo:(id)a0 oldShelfInfo:(id)a1;
- (void)manageDidUpdateToShelfInfo:(id)a0 oldShelfInfo:(id)a1 completeBlock:(id /* block */)a2;
- (void)manageWillCloseWithShelfInfo:(id)a0;
- (void)manageViewControllerWillCloseWithShelfInfo:(id)a0;
- (void)shelfManageControllerDidEditedCard:(unsigned long long)a0 toNewInfo:(id)a1 oldShelfInfo:(id)a2;
- (void)shelfManageControllerDidSelectIndex:(unsigned long long)a0 shelfInfo:(id)a1;
- (void)shelfManageControllerOpenFirstCard;
- (void)nativeAppShelfManagerVC:(id)a0 couponInfoBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)pluginContext;

@end

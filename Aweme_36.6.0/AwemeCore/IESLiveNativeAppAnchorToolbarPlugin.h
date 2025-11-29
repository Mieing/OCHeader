@class NSString, NSTimer, HTSLiveToolbarItem, UIView;
@protocol IESLiveBubbleGuide, IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppAnchorToolbarPlugin : NSObject <IESLiveNativeAppAnchorToolbarPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveToolbarComponentHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) NSTimer *tipsTimer;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;
@property (nonatomic) BOOL isPunishStatus;
@property (weak, nonatomic) HTSLiveToolbarItem *timorEntryItem;
@property (nonatomic) BOOL useNewEntrance;
@property (copy, nonatomic) NSString *curMountFlowTimorSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentUpdate:(id)a0;
- (void)nativeAppUnmount;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (BOOL)isPunishNativeApp;
- (id)curTimorEntryItem;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)nativeAppShelfInfoWillChange:(id)a0 oldVersion:(id)a1;
- (void)registerToolbarItem;
- (void)toastIfCoexistContentChanged:(id)a0 oldVersion:(id)a1;
- (void)trackCoexistRoomChangeIfNeeded:(id)a0 oldShelfInfo:(id)a1;
- (void)trackCoexistBindEndSource:(id)a0 shelfInfo:(id)a1;
- (void)trackCoexistBindBegin:(id)a0;
- (void)trackCoexistBindEnd:(id)a0;
- (void)createTipsTimer;
- (void)setupToolbarTimorItem:(id)a0 atWhere:(id)a1;
- (BOOL)needFilterToolbarIMWithItem:(id)a0;
- (BOOL)updateInfoByShelfMessageIfNeededWithExtra:(id)a0;
- (void)timorToolbarItemClicked:(id)a0;
- (void)showTimorToolbarBubbleGuideIfNeeded:(id)a0;
- (void)onReceiveShelfInfo:(id)a0;
- (void)presentToolbarItemVC;
- (void)displayWithPunishStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)pluginContext;

@end

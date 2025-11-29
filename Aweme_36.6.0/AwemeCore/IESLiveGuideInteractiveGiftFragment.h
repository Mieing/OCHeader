@class NSString, IESLiveGuideInteractiveGiftStore;

@interface IESLiveGuideInteractiveGiftFragment : IESLiveGuideComponent <IESLiveGiftModuleInteractiveGiftInterface, IESLiveGuideToolBarAction>

@property (retain, nonatomic) IESLiveGuideInteractiveGiftStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (void)toolbarItemReloadFinished;
- (void)showGiftPanelWithExtra:(id)a0;
- (void).cxx_destruct;

@end

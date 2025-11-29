@class NSString, IESLiveDotAndBubbleManager, UIView;
@protocol HTSLiveToolbar;

@interface IESLiveAnchorToolbarFragment : IESLiveRoomComponent <HTSLiveToolbarProvider, IESLiveAnchorToolbarRouter>

@property (retain, nonatomic) UIView<HTSLiveToolbar> *toolbar;
@property (retain, nonatomic) IESLiveDotAndBubbleManager *bubbleManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)hideComponent;
- (void)showComponent;
- (void)mountDidFinishForLevel:(long long)a0;
- (id)landscapeTopbar;
- (BOOL)containItem:(int)a0 inMorePanel:(BOOL)a1;
- (BOOL)containItemInSlot:(int)a0;
- (void)showToolbar;
- (void)ignoreInterceptForGroupItemWithItemIdentifier:(id)a0;
- (void)requestToAnimateWithIdentifier:(id)a0;
- (void)resetToolbarAnimationTimer;
- (void)triggerItemAnimationAtOnceIfNeeded;
- (void)addCoordinaryAnimatonItem:(id)a0 identifier:(id)a1;
- (void)removeCoordinaryAnimatonItemByIdentifier:(id)a0;
- (BOOL)enableToolbarNewStyle;
- (void)showGroupItem:(BOOL)a0;
- (void)showGameCenterItem:(BOOL)a0;
- (void)showDecorationItem:(BOOL)a0;
- (void)showGroup:(id)a0 highLightItems:(id)a1;
- (void)registerHandlerWithItem:(id)a0 inShowPath:(id)a1 handler:(id)a2;
- (id)toolConfig;
- (id)toolbarNameWithIdentifier:(id)a0;
- (id)getDecorationItemName;
- (void).cxx_destruct;
- (void)hideToolbar;

@end

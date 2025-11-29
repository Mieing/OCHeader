@class NSString, NSMutableDictionary;

@interface IESLiveRoomPopupService : IESLiveGeneralBaseService <IESLivePopupService, IESLiveAutoRotateAction, IESLiveSplitScreenAction>

@property (retain, nonatomic) NSMutableDictionary *preRegisteredItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)serviceUninstall;
- (void)showSimpleDynamicPortraitView:(id)a0 itemType:(long long)a1 backgroundContainer:(id)a2 cornerRadii:(double)a3;
- (void)removeWithItem:(id)a0;
- (void)hideImmediatelyWithType:(long long)a0;
- (void)hideImmediately:(id)a0;
- (BOOL)isItemShowing:(long long)a0;
- (id)itemWithType:(long long)a0;
- (void)removeWithType:(long long)a0;
- (void)removeAllWithType:(long long)a0;
- (void)hideAllPopupItemImmediately;
- (id)getLastPopupItem;
- (void)showSimpleDynamicPortraitView:(id)a0 itemType:(long long)a1 backgroundContainer:(id)a2 animType:(long long)a3;
- (void)registerPreItem:(id)a0;
- (BOOL)showWithType:(long long)a0;
- (BOOL)showWithType:(long long)a0 extraParams:(id)a1;
- (void)hideWithType:(long long)a0;
- (void)splitScreenBreakPointUpdate;
- (BOOL)verifyItem:(id)a0;
- (void)hide:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)show:(id)a0;

@end

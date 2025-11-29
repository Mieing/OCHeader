@class IESLivePlaybackPopupItem, NSMutableDictionary, NSString, UIView;

@interface IESLivePlaybackPopupFragment : IESLivePlaybackComponent <IESLivePlaybackPopupService, IESLivePlaybackAutoRotateAction>

@property (retain, nonatomic) NSMutableDictionary *popupItems;
@property (weak, nonatomic) IESLivePlaybackPopupItem *lastItem;
@property (retain, nonatomic) UIView *defaultPanelOnIPadForPortrait;
@property (retain, nonatomic) UIView *defaultPanelOnIPadForLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)componentDidUnmount;
- (void)removeWithItem:(id)a0;
- (void)hideImmediatelyWithType:(long long)a0;
- (BOOL)isItemShowing:(long long)a0;
- (id)itemWithType:(long long)a0;
- (void)removeWithType:(long long)a0;
- (void)hideAllPopupItemImmediately;
- (id)getLastPopupItem;
- (void)hideWithType:(long long)a0;
- (void)showInAutoLayout:(id)a0;
- (void)configItem:(id)a0;
- (void)cleanWithItem:(id)a0;
- (void)showDefaultPanelOnIPadWithSubview:(id)a0;
- (void)hide:(id)a0;
- (void).cxx_destruct;
- (void)show:(id)a0;

@end

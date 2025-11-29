@class NSString;

@interface IESIMMessageListZoomTransitionComponent : AWEIMComponentBase <IESIMMessageListZoomTransitionInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (BOOL)zoomTransitionWantsFromViewDisappear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (id)mediaDetailTransitionStartView;
- (void)componentDidMounted:(id)a0;
- (id)p_cardEixtTransitionSnapshotForView:(id)a0 enableAB:(BOOL)a1;
- (id)p_generateSnapshotWithCell:(id)a0 offset:(long long)a1;

@end

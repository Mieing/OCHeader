@class NSString;

@interface IESIMInputWatchOnceBubbleComponent : AWEIMComponentBase <IESIMPopoverDelegate, IESIMInputWatchOnceBubbleComponentInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) id popoverActionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShowWatchOnceBubbleGuide;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)popoverDidDisappear:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)tryShowWatchOnceBubbleGuide;
- (void)showHoverableActionSheetWithGesture:(id)a0 showView:(id)a1 offset:(struct UIOffset { double x0; double x1; })a2 switchBlock:(id /* block */)a3;
- (void)tryShowSwitchWatchOnceModelPopover:(id)a0 showView:(id)a1 offset:(struct UIOffset { double x0; double x1; })a2;
- (void).cxx_destruct;

@end

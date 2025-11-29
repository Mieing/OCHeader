@class NSString;

@interface IESIMContactPickerCustomTopViewComponent : AWEIMComponentBase <IESIMContactPickerComponentViewProvider, IESIMContactPickerCustomViewDelegate, IESIMContactPickerSelectAction>

@property (copy, nonatomic) id /* block */ flexTopContainerAnimationBlock;
@property (nonatomic) BOOL hostVCDidFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)updateVisibleState:(BOOL)a0;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)setupFlexTopContainerAnimationBlock:(id /* block */)a0;
- (id)p_customTopConfig;
- (void).cxx_destruct;
- (id)componentView;

@end

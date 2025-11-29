@class NSString, AWEIMSkylightBasePresenter;

@interface AWEIMSkylightBaseComponent : AWEIMComponentBase <AWEIMSkylightBaseComponentProtocol>

@property (retain, nonatomic) AWEIMSkylightBasePresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)reloadPresenter;
- (void)reloadCell;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentAfterModelUpdate;
- (void).cxx_destruct;

@end

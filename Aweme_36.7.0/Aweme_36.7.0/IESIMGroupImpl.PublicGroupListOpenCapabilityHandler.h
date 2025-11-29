@interface IESIMGroupImpl.PublicGroupListOpenCapabilityHandler : IESIMGroupOpenCapabilityHandler <IESIMContactPickerControllerDelegate> {
    void /* unknown type, empty encoding */ isLiveLuckBagGroupCellSelected;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ openCapabilityModel;
    void /* unknown type, empty encoding */ delegate;
}

- (void)setDelegate:(id)a0;
- (void)contactPickerControllerDidDismissViewController:(id)a0;
- (void)openViewControllerWithModel:(id)a0 completion:(id /* block */)a1;
- (void)executeWithModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithTarget:(id)a0 targetViewController:(Class)a1 model:(Class)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)dismissViewController;

@end

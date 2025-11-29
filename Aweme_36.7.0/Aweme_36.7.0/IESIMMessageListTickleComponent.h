@interface IESIMMessageListTickleComponent : AWEIMComponentBase <IESIMMessageListTickleInterface, AWEIMMessageListDataAction> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_readedMaxTickleIndex;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)tickleElfWidgetView:(id)a0 conversation:(id)a1 elfUser:(id)a2 completion:(id /* block */)a3;
- (void)afterFirstScreenDataInitialize;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)tickleAvatarView:(id)a0 messageViewModel:(id)a1 completion:(id /* block */)a2;
- (id)init;

@end

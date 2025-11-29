@interface AWEIMGroupChainEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry> {
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_plusPanelModel;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (BOOL)canShowDecidedBySettingsWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

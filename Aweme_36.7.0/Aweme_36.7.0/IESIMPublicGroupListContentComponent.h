@interface IESIMPublicGroupListContentComponent : IESIMContactPickerShortcutContentComponent {
    void /* unknown type, empty encoding */ createPublicGroupProvider;
    void /* unknown type, empty encoding */ publicGroupDataProvider;
    void /* unknown type, empty encoding */ mySocialGroupDataProvider;
    void /* unknown type, empty encoding */ pinnedConversationIds;
}

- (void)componentDidMounted:(id)a0;
- (void)reloadGroupDataWithShouldScrollToTop:(BOOL)a0 isNeedClearPublicData:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)dealloc;

@end

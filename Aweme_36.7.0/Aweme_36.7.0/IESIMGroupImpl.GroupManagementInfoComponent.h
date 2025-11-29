@interface IESIMGroupImpl.GroupManagementInfoComponent : AWEIMComponentBase <IESIMGroupManagementInfoService> {
    void /* unknown type, empty encoding */ managementInfoDeferred;
    void /* unknown type, empty encoding */ groupManager;
    void /* unknown type, empty encoding */ isFetchingRemote;
    void /* unknown type, empty encoding */ needFetchRemote;
}

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)groupManagementInfo;
- (id)triggerRefreshGroupManagementInfo;
- (void).cxx_destruct;
- (id)init;

@end

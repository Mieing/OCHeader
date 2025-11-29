@interface AWEIMGroupCreateOpenGroupService : HTSService <DUXLoadingToastDelegate, IESIMCreateOpenGroupService> {
    void /* unknown type, empty encoding */ actionCheckRespondIfNeed;
    void /* unknown type, empty encoding */ loadingToast;
    void /* unknown type, empty encoding */ request;
}

- (void)DUXLoadingToastDidClosed:(id)a0;
- (void)DUXLoadingToastDidStopAnimating:(id)a0;
- (void)DUXToastWillRemoved:(id)a0;
- (void)fetchCreateOpenGroupDataWithGroupType:(long long)a0 actionCheckSource:(long long)a1 completion:(id /* block */)a2;
- (BOOL)showCreateOpenGroupRuleBlockDialogWithTitle:(id)a0 subtitle:(id)a1 ruleInfo:(id)a2;
- (void)showCreateOpenGroupRuleViewControllerWithRuleInfo:(id)a0;
- (BOOL)createOpenGroupV2IfNeed;
- (Class)createOpenGroupViewControllerClass;
- (id)makeCreateOpenGroupViewControllerWithContext:(id)a0;
- (id)makeCreateOpenGroupViewControllerWithModel:(id)a0 ruleInfo:(id)a1;
- (id)makeCreateOpenGroupPageContextWithEnterFrom:(id)a0;
- (id)makeCreateOpenGroupPageContextWithBizLine:(long long)a0 bizScene:(id)a1 invokeChannel:(long long)a2 enterFrom:(id)a3;
- (id)prefetchCreateOpenGroupPageDataWithGroupType:(long long)a0 actionCheckSource:(long long)a1;
- (void)transferToCreateOpenGroupPageWithEnterFrom:(id)a0 groupType:(long long)a1 checkSource:(long long)a2 pageContextConfiguration:(id /* block */)a3 transferCompletion:(id /* block */)a4;
- (void)configurationPageContext:(id)a0 params:(id)a1;
- (BOOL)enableTransferToCreatePublicGroupPickerWithModel:(id)a0;
- (void)tryTransferToCreatePublicGroupPickerWithModel:(id)a0 completion:(id /* block */)a1;
- (void)checkIsEnableToCreateOpenGroupWithGroupType:(long long)a0 checkSource:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end

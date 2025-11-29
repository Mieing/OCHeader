@interface IESIMCreateOpenGroupEntryThresholdV2Component : AWEIMComponentBase <IESIMGroupImpl.CreateOpenGroupCreationInfoSubscriber> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ entryLimit;
    void /* unknown type, empty encoding */ selectedEntryLimit;
    void /* unknown type, empty encoding */ infoDeferred;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)creationInfoParams;
- (void)updateWithCreationInfo:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

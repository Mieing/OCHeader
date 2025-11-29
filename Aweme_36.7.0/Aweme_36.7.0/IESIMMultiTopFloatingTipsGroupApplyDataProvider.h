@interface IESIMMultiTopFloatingTipsGroupApplyDataProvider : AWEIMComponentBase <IESIMMultiTopFloatingTipsDataProviderInterface> {
    void /* unknown type, empty encoding */ topFloatingTipsDataService;
}

@property (nonatomic) long long type;

- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)tailOptionStyle;
- (BOOL)shouldDisplayRedIconWithModel:(id)a0;
- (BOOL)shouldDisplayRedNumberWithModel:(id)a0;
- (void)transferToUrlString:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

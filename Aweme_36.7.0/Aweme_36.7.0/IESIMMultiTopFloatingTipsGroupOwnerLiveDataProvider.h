@interface IESIMMultiTopFloatingTipsGroupOwnerLiveDataProvider : AWEIMComponentBase <IESIMMultiTopFloatingTipsDataProviderInterface>

@property (nonatomic) long long type;

- (id)asyncMakeIconViewWithModel:(id)a0 completion:(id /* block */)a1;
- (void)transferToUrlString:(id)a0 model:(id)a1;
- (void)didShowWithModel:(id)a0 urlString:(id)a1;
- (id)init;

@end

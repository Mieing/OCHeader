@protocol AWEIMShareModelProtocol;

@interface AWEIMShareContentWithTextChannel : AWEShareBaseChannel

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareModelWithContext:(id)a0;
- (unsigned long long)p_aweResultWithIMResult:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)prepareWithContext:(id)a0;

@end

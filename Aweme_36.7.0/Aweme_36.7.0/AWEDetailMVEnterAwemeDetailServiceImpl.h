@class AWEDetailMVViewModel;
@protocol AWEDetailEnterAwemeDetailHost;

@interface AWEDetailMVEnterAwemeDetailServiceImpl : AWEDetailEnterAwemeDetailServiceImpl {
    id<AWEDetailEnterAwemeDetailHost> _host;
}

@property (weak, nonatomic) AWEDetailMVViewModel *stateContext;

- (void)enterAwemeDetailWithIndexPath:(id)a0 awemeModel:(id)a1;
- (id)initWithHost:(id)a0 stateContext:(id)a1;
- (void).cxx_destruct;
- (void)setHost:(id)a0;
- (id)host;

@end

@class AWEDetailPropViewModel;
@protocol AWEDetailEnterAwemeDetailHost;

@interface AWEDetailPropEnterAwemeDetailServiceImpl : AWEDetailEnterAwemeDetailServiceImpl {
    id<AWEDetailEnterAwemeDetailHost> _host;
}

@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;

- (void)enterAwemeDetailWithIndexPath:(id)a0 awemeModel:(id)a1;
- (id)initWithHost:(id)a0 stateContext:(id)a1;
- (void)enterVideoDetailWithIndexPath:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void)enterVideoDetailWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)setHost:(id)a0;
- (id)host;

@end

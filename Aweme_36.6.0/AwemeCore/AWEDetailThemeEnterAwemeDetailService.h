@class AWEDetailThemeViewModel;
@protocol AWEDetailEnterAwemeDetailHost;

@interface AWEDetailThemeEnterAwemeDetailService : AWEDetailEnterAwemeDetailServiceImpl {
    id<AWEDetailEnterAwemeDetailHost> _host;
}

@property (weak, nonatomic) AWEDetailThemeViewModel *stateContext;

- (void)enterAwemeDetailWithIndexPath:(id)a0 awemeModel:(id)a1;
- (id)initWithHost:(id)a0 stateContext:(id)a1;
- (void)enterVideoDetailWithIndexPath:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void).cxx_destruct;
- (void)setHost:(id)a0;
- (id)host;

@end

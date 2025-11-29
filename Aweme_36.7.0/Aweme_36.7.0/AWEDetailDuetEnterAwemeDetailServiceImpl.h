@class AWEDetailDuetViewModel;
@protocol AWEDetailEnterAwemeDetailHost;

@interface AWEDetailDuetEnterAwemeDetailServiceImpl : AWEDetailEnterAwemeDetailServiceImpl {
    id<AWEDetailEnterAwemeDetailHost> _host;
}

@property (weak, nonatomic) AWEDetailDuetViewModel *stateContext;

- (void)enterAwemeDetailWithIndexPath:(id)a0 awemeModel:(id)a1;
- (id)initWithHost:(id)a0 stateContext:(id)a1;
- (void).cxx_destruct;
- (void)setHost:(id)a0;
- (id)host;

@end

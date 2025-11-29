@class AWEDetailVideoCutTemplateViewModel;
@protocol AWEDetailVideoCutTemplateEnterAwemeDetailServiceDelegate, AWEDetailEnterAwemeDetailHost;

@interface AWEDetailVideoCutTemplateEnterAwemeDetailServiceImpl : AWEDetailEnterAwemeDetailServiceImpl {
    id<AWEDetailEnterAwemeDetailHost> _host;
}

@property (weak, nonatomic) AWEDetailVideoCutTemplateViewModel *stateContext;
@property (weak, nonatomic) id<AWEDetailVideoCutTemplateEnterAwemeDetailServiceDelegate> delegate;

- (void)enterAwemeDetailWithIndexPath:(id)a0 awemeModel:(id)a1;
- (id)initWithHost:(id)a0 stateContext:(id)a1;
- (void).cxx_destruct;
- (void)setHost:(id)a0;
- (id)host;

@end

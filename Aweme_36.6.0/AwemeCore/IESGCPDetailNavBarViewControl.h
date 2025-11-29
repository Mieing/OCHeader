@class IESGCPDetailBaseViewModel;

@interface IESGCPDetailNavBarViewControl : IESGCPDetailBaseViewControl {
    IESGCPDetailBaseViewModel *_viewModel;
}

+ (void)gamecpDetailLazyLoad;

- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)viewModel;

@end

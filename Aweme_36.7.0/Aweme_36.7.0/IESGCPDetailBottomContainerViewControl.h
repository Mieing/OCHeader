@class IESGCPDetailBaseViewModel;

@interface IESGCPDetailBottomContainerViewControl : IESGCPDetailBaseViewControl {
    IESGCPDetailBaseViewModel *_viewModel;
}

+ (void)gamecpDetailLazyLoad;

- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)viewModel;

@end

@class IESGCPDetailBaseViewModel;

@interface IESGCPDetailTwoActionButtonViewControl : IESGCPDetailBaseViewControl {
    IESGCPDetailBaseViewModel *_viewModel;
}

+ (void)gamecpDetailLazyLoad;

- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)viewModel;

@end

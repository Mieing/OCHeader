@class IESGCPDetailBaseViewModel;

@interface IESGCPDetailInteactivePlayBarViewControl : IESGCPDetailInteractionBarViewControl {
    IESGCPDetailBaseViewModel *_viewModel;
}

+ (void)gamecpDetailLazyLoad;

- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)viewModel;

@end

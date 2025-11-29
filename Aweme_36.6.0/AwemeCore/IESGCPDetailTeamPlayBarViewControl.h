@class IESGCPDetailBaseViewModel;

@interface IESGCPDetailTeamPlayBarViewControl : IESGCPDetailInteractionBarViewControl {
    IESGCPDetailBaseViewModel *_viewModel;
}

+ (void)gamecpDetailLazyLoad;

- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)viewModel;

@end

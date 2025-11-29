@class NSString, IESGCPDetailBaseViewModel;

@interface IESGCPDetailLynxViewControl : IESGCPDetailBaseViewControl {
    IESGCPDetailBaseViewModel *_viewModel;
}

@property (readonly, nonatomic) NSString *lynxURL;

+ (void)gamecpDetailLazyLoad;

- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)viewModel;

@end

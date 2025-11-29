@class HTSLivePopupWebViewModel;
@protocol IESLiveInternalRouter;

@interface HTSLivePopupWebViewFragment : IESLiveRoomComponent

@property (retain, nonatomic) HTSLivePopupWebViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;

- (void)componentCreate;
- (void)bindViewModel;
- (void).cxx_destruct;

@end

@class IESLiveRevenueInteractTrayViewModel;

@interface IESLiveRevenueInteractTrayFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveRevenueInteractTrayViewModel *viewModel;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentCreate;
- (void).cxx_destruct;

@end

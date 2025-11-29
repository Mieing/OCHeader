@class IESLiveBattleDrawViewModel;

@interface IESLiveBattleDrawFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveBattleDrawViewModel *viewModel;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)handleClearNotify:(id)a0;
- (void).cxx_destruct;

@end

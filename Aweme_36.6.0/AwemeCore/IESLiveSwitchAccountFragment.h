@class IESLiveSwitchAccountConfigIMP;

@interface IESLiveSwitchAccountFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveSwitchAccountConfigIMP *switchAccountHandle;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void).cxx_destruct;

@end

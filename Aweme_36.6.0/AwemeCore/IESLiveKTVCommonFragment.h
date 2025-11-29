@class IESLiveInteractKTVChallengeComponent;

@interface IESLiveKTVCommonFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveInteractKTVChallengeComponent *ktvChallengeService;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void).cxx_destruct;

@end

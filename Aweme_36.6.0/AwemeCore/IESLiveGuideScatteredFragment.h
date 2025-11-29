@interface IESLiveGuideScatteredFragment : IESLiveGuideComponent

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)handleLightWeightRoom;
- (void)checkLightWeightRoomResult:(id)a0 callback:(id /* block */)a1;

@end

@class IESLiveAlphaVideoPlayerStore;

@interface IESLiveAlphaVideoPlayerFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveAlphaVideoPlayerStore *store;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void).cxx_destruct;

@end

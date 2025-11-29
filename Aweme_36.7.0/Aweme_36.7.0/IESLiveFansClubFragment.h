@class IESLiveFansClubStore;

@interface IESLiveFansClubFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveFansClubStore *store;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void).cxx_destruct;

@end

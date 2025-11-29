@class IESLiveVSFansClubStore;

@interface IESLiveVSFansClubFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveVSFansClubStore *store;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void).cxx_destruct;

@end

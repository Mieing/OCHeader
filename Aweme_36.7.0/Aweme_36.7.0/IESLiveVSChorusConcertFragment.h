@class IESLiveVSChorusConcertEntryManager, IESLiveVSChorusConcertPlayerManager;

@interface IESLiveVSChorusConcertFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveVSChorusConcertEntryManager *entryManager;
@property (retain, nonatomic) IESLiveVSChorusConcertPlayerManager *playerManager;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void).cxx_destruct;

@end

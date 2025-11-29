@class NSString;
@protocol IESLiveAggregateColumnProvider;

@interface IESLiveAggregateColumnFragment : IESLiveRoomComponent <IESLiveAggregateColumnAction>

@property (retain, nonatomic) id<IESLiveAggregateColumnProvider> aggregateColumnProvider;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void)createDidFinishForLevel:(long long)a0;
- (id)entranceView;
- (void)setEntranceHidden:(BOOL)a0;
- (void)liveAggregateShowDrawer;
- (void).cxx_destruct;

@end

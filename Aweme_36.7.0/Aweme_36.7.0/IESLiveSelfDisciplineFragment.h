@class IESLiveSelfDisciplineStore, IESLiveSelfDisciplineOpenPanelViewModel, NSString;
@protocol IESLiveSelfDisciplineEventTracker;

@interface IESLiveSelfDisciplineFragment : IESLiveRoomComponent <IESLiveSelfDisciplineRouter, IESLiveSelfDisciplineLifeCycle>

@property (retain, nonatomic) IESLiveSelfDisciplineStore *store;
@property (retain, nonatomic) IESLiveSelfDisciplineOpenPanelViewModel *openPanelviewModel;
@property (retain, nonatomic) id<IESLiveSelfDisciplineEventTracker> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isSelfDsiciplineEnable;
+ (BOOL)isAudienceEnable;
+ (BOOL)isAnchorEnableFromRoom:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (BOOL)isInSelfDiscipline;
- (void)showSelfDisciplineOpenPanel:(id)a0;
- (void)startSelfDiscipline:(id)a0 extra:(id)a1;
- (void)startSelfDisciplineWithConfig:(id)a0;
- (void)changeSelfDisciplineConfig:(id)a0;
- (void)stopSelfDiscipline;
- (void)selfDisciplineDidFinish;
- (BOOL)p_checkoutIsInOtherPlayMode;
- (void).cxx_destruct;

@end

@class HTSEventContext, IESLiveLGameDuringLiveModel, NSString;
@protocol IESLiveRoomService;

@interface IESLiveLGameDuringLiveTrackerContext : NSObject <IESLiveLGameTrackerContext>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveLGameDuringLiveModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackerParams;
- (void)trackWithName:(id)a0 params:(id)a1;
- (void)updateDuringLiveModel:(id)a0;
- (id)commonTrackerParamsWithModel:(id)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 duringLiveModel:(id)a2;
- (void).cxx_destruct;

@end

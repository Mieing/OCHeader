@class HTSEventContext, NSMutableArray;
@protocol IESLiveRoomService;

@interface IESLivePPOMonitorHandler : NSObject

@property (retain, nonatomic) NSMutableArray *monitorArray;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)initWithDIContext:(id)a0 room:(id)a1 context:(id)a2;
- (void)startTrackPanelShowWithType:(id)a0;
- (void)endTrackPanelShowWithType:(id)a0;
- (id)fetchMonitor:(id)a0;
- (void).cxx_destruct;

@end

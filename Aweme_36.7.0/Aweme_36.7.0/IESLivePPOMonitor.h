@class NSString, HTSEventContext;
@protocol IESLiveRoomService;

@interface IESLivePPOMonitor : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) double startTime;
@property (retain, nonatomic) id<IESLiveRoomService> room;

+ (id)startMonitorWithType:(id)a0 room:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)stop;

@end

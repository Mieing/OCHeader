@class NSNumber, HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveMonitor;

@interface IESLivePropsAPIImpl : HTSLiveApi <IESLivePropsAPI>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSNumber *lastServerTime;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

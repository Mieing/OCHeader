@class HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveScreencastDeviceFeatureConsumeTrack : NSObject <IESLiveDeviceFeatureConsumeInterface>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)consumeData:(id)a0;
- (void).cxx_destruct;

@end

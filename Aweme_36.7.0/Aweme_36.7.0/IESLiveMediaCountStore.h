@class HTSLiveRoomStatsMessage, HTSEventContext, NSString, HTSLiveRoomViewStats;
@protocol IESLiveRoomService;

@interface IESLiveMediaCountStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) HTSLiveRoomStatsMessage *roomStatsMessage;
@property (readonly, nonatomic) HTSLiveRoomViewStats *roomCount;
@property (retain, nonatomic) NSString *countStr;
@property (nonatomic) BOOL isShowCountView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentOrientationChanged:(long long)a0;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)updateUserState:(id)a0;
- (void)updateUserStateShow;
- (BOOL)shouldShowAudienceCountView;
- (long long)upRightStatsFloatingLayer;
- (BOOL)enableShowPCU;
- (id)currentRoomCount;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end

@class NSString, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveEnterRoomBizViewOnScreenServiceImpl : IESLiveGeneralBaseService <IESLiveEnterRoomBizViewOnScreenService>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) double enterRoomStartTime;
@property (retain, nonatomic) NSMutableDictionary *bizViewFirstScreenCostDic;
@property (retain, nonatomic) NSMutableDictionary *bizViewFirstScreenDurationDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

@end

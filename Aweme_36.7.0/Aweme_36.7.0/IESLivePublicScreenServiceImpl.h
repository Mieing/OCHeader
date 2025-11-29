@class NSString;

@interface IESLivePublicScreenServiceImpl : IESLiveGeneralBaseService <IESLiveMessageListService, IESLiveMessageListServiceInjector>

@property (nonatomic) long long countOfCommentInterflowThisRoom;
@property (nonatomic) long long countOfCommentInterflowOtherRoom;
@property (nonatomic) BOOL messageListFirstUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (long long)getCountOfCommentInterflowThisRoom;
- (long long)getCountOfCommentInterflowOtherRoom;
- (void)countCommentInterflowThisRoom:(long long)a0;
- (void)countCommentInterflowOtherRoom:(long long)a0;

@end

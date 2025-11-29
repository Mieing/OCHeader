@class NSString;
@protocol IESLiveRoomService, IESECLiveRoomCart;

@interface IESECLiveRoom : NSObject <IESECLiveRoom>

@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (nonatomic, getter=isOrientationLandscape) BOOL orientationLandscape;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *anchorID;
@property (readonly, copy, nonatomic) NSString *anchorSecUserID;
@property (readonly, copy, nonatomic) NSString *authorID;
@property (readonly, nonatomic) long long followStatus;
@property (readonly, nonatomic) BOOL withCommercePermission;
@property (readonly, nonatomic) BOOL withFusionShopEntry;
@property (readonly, nonatomic) id liveDIContext;
@property (readonly, copy, nonatomic) NSString *logID;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) id<IESECLiveRoomCart> roomCart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceUpdateToOrientation:(long long)a0;
- (int)roomType;
- (id)initWithRoomService:(id)a0;
- (BOOL)isD3Room;
- (void).cxx_destruct;

@end

@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveECRoomService : NSObject <IESLiveECRoomService>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceOf:(id)a0;

- (id)secAuthorID;
- (void)setupRoomModel:(id)a0;
- (BOOL)ecommerceAuth;
- (id)followStatus;
- (void).cxx_destruct;
- (id)groupID;
- (id)owner;
- (long long)scene;
- (id)roomID;
- (id)authorID;

@end

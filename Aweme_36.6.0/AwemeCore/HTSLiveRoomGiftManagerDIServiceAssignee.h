@class NSString;
@protocol IESLiveUserService, IESLiveRevenueInteractModule, IESLiveInteractionModule, IESLiveRoomService;

@interface HTSLiveRoomGiftManagerDIServiceAssignee : NSObject

@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) id<IESLiveInteractionModule> socialAdapter;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModuleAdapter;
@property (retain, nonatomic) NSString *currentUserID;

- (void)didSetAttachingDIContext;
- (BOOL)isPushStreamUser;
- (void).cxx_destruct;

@end

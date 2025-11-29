@class NSString, NSNumber, HTSLiveSubscribeInfoResponse_Data;

@interface IESLivePrivilegeEntranceProfileLiveVipViewModel : NSObject

@property (retain, nonatomic) NSString *vipState;
@property (retain, nonatomic) NSNumber *showVIPGuide;
@property (retain, nonatomic) NSNumber *roomVIPDataReady;
@property (retain, nonatomic) HTSLiveSubscribeInfoResponse_Data *subscribeInfo;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL expiredShouldGuide;
@property (retain, nonatomic) NSNumber *enableShowAnimation;
@property (nonatomic) BOOL anchorVipIconOptEnable;

- (void)didSetAttachingDIContext;
- (void)bindService;
- (id)initWithAnchorTag:(BOOL)a0;
- (BOOL)enableVIPEntrance;
- (void)handleVIPUpdateInfo:(id)a0 fromType:(long long)a1;
- (void)handleFollowEvent;
- (id)trackVIPStatus;
- (BOOL)normalVipIconOptEnable;
- (void).cxx_destruct;
- (void)dealloc;

@end

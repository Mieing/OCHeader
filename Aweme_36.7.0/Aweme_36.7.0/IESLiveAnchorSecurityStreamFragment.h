@class NSTimer, NSString;
@protocol IESLiveSecurityService;

@interface IESLiveAnchorSecurityStreamFragment : IESLiveRoomComponent <IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) id<IESLiveSecurityService> securityService;
@property (nonatomic) long long seiIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)componentUnmount;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)p_sendSignFrameToSEI;
- (void).cxx_destruct;

@end

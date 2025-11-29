@class IESLiveSecurityInspectView, IESLiveSecurityInspectStore, IESLiveGCDTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveSecurityInspectFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveSecurityInspectStore *store;
@property (retain, nonatomic) IESLiveSecurityInspectView *securityInspectView;
@property (retain, nonatomic) IESLiveGCDTimer *loopShowTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loopShowQueue;
@property (nonatomic) BOOL hasShowSecurityInspect;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)bindStore;
- (void)loopToShowSecurityInspectView;
- (void)loadSecurityInspectView;
- (void).cxx_destruct;

@end

@class IESLiveGCDTimer;

@interface IESLiveAioLinkDynamicServiceHandler : IESLiveAioLinkLynxServiceHandler

@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (id)initWithService:(id)a0 protocolName:(id)a1 view:(id)a2;
- (BOOL)shouldCallLynx;
- (void).cxx_destruct;
- (void)dealloc;

@end

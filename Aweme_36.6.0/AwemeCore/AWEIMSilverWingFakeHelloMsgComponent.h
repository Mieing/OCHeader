@class AWEIMMessage;

@interface AWEIMSilverWingFakeHelloMsgComponent : AWEIMComponentBase

@property (retain, nonatomic) AWEIMMessage *fakeSilverWingHelloMsg;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (void)p_addKVO;
- (void)p_insertFakeHelloMsg;
- (void)p_deleteFakeHelloMsg;
- (void).cxx_destruct;

@end

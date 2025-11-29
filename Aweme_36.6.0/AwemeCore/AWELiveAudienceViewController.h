@class UIViewController, AWELiveAudienceViewControllerDelegateProxy, NSString, HTSLiveRoom;
@protocol AWELiveAudienceDetailDelegate;

@interface AWELiveAudienceViewController : NSObject <AWELiveRoomMessage, IESLivePipActions, HTSLiveAudienceViewControllerDelegate, AWELiveAuienceViewControllerProtocol>

@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) AWELiveAudienceViewControllerDelegateProxy *audienceDelegateProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELiveAudienceDetailDelegate> delegate;
@property (retain, nonatomic) UIViewController *audienceViewController;

- (void)didSetAttachingDIContext;
- (id)currentLiveRoomID;
- (void)audienceQuitAllRoom;
- (void)startToShowPipWithShowType:(unsigned long long)a0;
- (BOOL)unwindToAudienceController:(id)a0 animated:(BOOL)a1;
- (id)initWithRoomModel:(id)a0;
- (void)exitLiveRoomWithType:(unsigned long long)a0;
- (void)checkOutterTiggerTransiton;
- (id)factoryFinishViewControllerWithLiveRoomModel:(id)a0 closeInterceptBlock:(id /* block */)a1;
- (void)attachAudienceViewControllerDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

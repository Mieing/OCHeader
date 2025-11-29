@class NSString, AWEUGKitComponent, AWEAlertCallbackWrapper, AWEUGDesktopChannelGuideUIConfigModel, BDXBridgeEventSubscriber;

@interface AWEUGDesktopChannelLynxGuideViewController : AWEUGDesktopChannelBaseViewController <AWEAlertProtocol>

@property (retain, nonatomic) AWEUGDesktopChannelGuideUIConfigModel *model;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUGKitComponent *component;
@property (retain) AWEAlertCallbackWrapper *callBackWrapper;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithModel:(id)a0 scene:(id)a1 enterFrom:(id)a2 component:(id)a3;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)registerEventCenter;
- (void).cxx_destruct;
- (void)show;

@end

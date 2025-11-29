@class NSString, AWESwitchNetPushView, AWEInnerPushCommonView, AWEInnerNotificationRequest, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWESwitchNetPushContent : NSObject <AWEInnerNotificationContent, AWESwitchNetPushViewDelegate>

@property (retain, nonatomic) AWESwitchNetPushView *oldView;
@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (id)extraParam;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (void)clickSwitchNetButton;
- (void).cxx_destruct;
- (id)content;
- (id)view;
- (id)title;
- (id)buttonText;
- (void)updateProperties;

@end

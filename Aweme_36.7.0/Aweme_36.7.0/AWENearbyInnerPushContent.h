@class AWEInnerPushCommonViewModel, AWENearbyInnerPushModel, UIImageView, NSString, AWEInnerPushCommonView, UIView, AWEInnerNotificationRequest;
@protocol AWEInnerNotificationContentOperator;

@interface AWENearbyInnerPushContent : NSObject <AWENearbyContainerEventMessage, AWEInnerNotificationContent>

@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) UIView *leftIconContainerView;
@property (retain, nonatomic) UIImageView *leftIconImageView;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (retain, nonatomic) AWENearbyInnerPushModel *innerPushModel;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (void)updateLeftIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (void)nearbyContainerDidDisappear;
- (void)registerInjectMessage;
- (void)trackPushShowEvent;
- (void)tech_trackInnerPushMonitorWithAction:(id)a0;
- (void)trackPushDismissEventWithReason:(long long)a0;
- (void)trackPushClickEvent;
- (void)openInnerPushPageWithActionInfo:(id)a0 completion:(id /* block */)a1;
- (void)commitInnerPushAttachTaskWithActionInfo:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)view;
- (void)dealloc;
- (void)updateProperties;

@end

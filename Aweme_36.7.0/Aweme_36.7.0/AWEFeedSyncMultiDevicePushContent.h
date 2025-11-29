@class AWEInnerNotificationRequest, NSString, AWEInnerPushCommonView, AWEFeedSyncMultiDevicePushView, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEFeedSyncMultiDevicePushContent : NSObject <AWEFeedSyncMultiDevicePushViewDelegate, AWEInnerNotificationContent>

@property (retain, nonatomic) AWEFeedSyncMultiDevicePushView *oldView;
@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (void)clickLandingButton;
- (void).cxx_destruct;
- (id)content;
- (id)view;
- (id)title;
- (id)buttonText;
- (void)updateProperties;

@end

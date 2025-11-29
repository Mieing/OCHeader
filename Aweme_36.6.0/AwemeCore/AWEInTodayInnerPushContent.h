@class AWEInTodayInnerPushViewModel, NSString, NSDictionary, AWEInnerPushCommonView, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEInTodayInnerPushContent : NSObject <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEInTodayInnerPushViewModel *model;
@property (retain, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)mainContent;
- (void)handleTapAction;
- (id)extImage;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateLeftExtraIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (id)extTag;
- (void)trackPushViewTagGesture;
- (void)trackEventSwipeGesDirectionUp;
- (void)trackEventShowWithTrackID:(id)a0;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;
- (id)title;
- (id)buttonText;
- (id)avatar;
- (void)updateProperties;
- (BOOL)hasAvatar;

@end

@class AWEInAppSBCPushNotice, NSDictionary, AWEConcernUpdateInnerPushView, AWEInnerPushCommonView, NSString, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEConcernUpdateInnerPushContent : NSObject <AWEInnerNotificationContent, AWEConcernUpdateInnerPushViewDelegate>

@property (retain, nonatomic) AWEInAppSBCPushNotice *model;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWEConcernUpdateInnerPushView *oldView;
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
- (id)trackingModelForScene:(unsigned long long)a0;
- (id)__trackEnterFrom;
- (void)updateLeftIcon;
- (void)updateLeftExtraIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (id)extTag;
- (id)prefixContent;
- (void)__trackInnerPushWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;
- (id)title;
- (id)buttonText;
- (id)avatar;
- (void)updateProperties;
- (BOOL)hasAvatar;

@end

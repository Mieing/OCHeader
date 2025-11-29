@class NSString, AWEUGSurveyPushModel, AWEInnerNotificationRequest, AWEInnerPushCommonView, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEUGSurveyPushContent : NSObject <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (retain, nonatomic) AWEUGSurveyPushModel *model;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (BOOL)tapGestureIsEnable:(id)a0;
- (void)updateLeftIcon;
- (void)updateTitleAreaItems;
- (void)updateContentArea;
- (void)updateRightActionArea;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)view;
- (void)updateProperties;

@end

@class NSString, AWEInnerNotificationRequest, AWEInnerPushCommonView, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEGameCPXPlayInnerPushContent : NSObject <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEInnerPushCommonView *pushView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *pushViewModel;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)updateLeftIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (void)updateLayoutProperties;
- (void).cxx_destruct;
- (id)view;

@end

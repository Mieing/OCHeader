@class IESLiveAnchorInnerPushModel, NSString, AWEInnerPushCommonView, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWELiveAnchorInnerPushContent : NSObject <AWEInnerNotificationContent>

@property (retain, nonatomic) IESLiveAnchorInnerPushModel *model;
@property (retain, nonatomic) AWEInnerPushCommonView *pushView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *pushViewModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)updateSubTitle;
- (void)updatePushViewModel;
- (void)updateHeight;
- (void)updateLeftArea;
- (void)updateMiddleArea;
- (void)updateRightArea;
- (void).cxx_destruct;
- (id)view;
- (void)updateTitle;

@end

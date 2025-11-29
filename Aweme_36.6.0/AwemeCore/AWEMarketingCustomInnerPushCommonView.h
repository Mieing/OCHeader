@class UIView, AWEInnerNotificationRequest, AWEMarketingCustomInnerPushModel;
@protocol AWEInnerNotificationContent;

@interface AWEMarketingCustomInnerPushCommonView : UIView

@property (weak, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationContent> notificationContent;
@property (retain, nonatomic) AWEMarketingCustomInnerPushModel *pushModel;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (weak, nonatomic) UIView *mainView;

- (void)updateViewWithRequest:(id)a0 notificationContent:(id)a1 pushModel:(id)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

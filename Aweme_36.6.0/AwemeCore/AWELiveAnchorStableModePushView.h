@class NSString, AWELiveAnchorStableModePushContent, UILabel, UIView;
@protocol AWEInnerNotificationContentOperator;

@interface AWELiveAnchorStableModePushView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) UIView *content;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) AWELiveAnchorStableModePushContent *anchorContentModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (BOOL)disableDismissPanGesture;
- (double)dismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

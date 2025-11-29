@class UILabel, NSString;
@protocol AWEInnerNotificationContentOperator;

@interface AWEAutoreadPasteboardSettingPopupGuideView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *rightTipLabel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateWithModel:(id)a0;

@end

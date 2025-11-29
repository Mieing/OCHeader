@class UIColor;

@interface FlowUIKit.FlowBasicInnerNotification : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ notificationName;
    void /* unknown type, empty encoding */ customInnerNotificationHeight;
    void /* unknown type, empty encoding */ maxInnerNotificationWidth;
    void /* unknown type, empty encoding */ autoDismissDuration;
    void /* unknown type, empty encoding */ autoDismissTimer;
    void /* unknown type, empty encoding */ autoDismiss;
    void /* unknown type, empty encoding */ haptic;
    void /* unknown type, empty encoding */ dismissOnTap;
    void /* unknown type, empty encoding */ dismissOnSwipeUp;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ onSwipeUp;
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ innerNotificationQueue;
    void /* unknown type, empty encoding */ animationDuration;
    void /* unknown type, empty encoding */ isDisplaying;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ contentShadowView;
    void /* unknown type, empty encoding */ customView;
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ isSuspended;
    void /* unknown type, empty encoding */ innerNotificationEdgeInsets;
    void /* unknown type, empty encoding */ cornerRadius;
}

@property (nonatomic, retain) UIColor *backgroundColor;

- (void)dismissWithForced:(BOOL)a0 compeletion:(id /* block */)a1;
- (void)onTapGestureRecognizer;
- (void)onSwipeUpGestureRecognizer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end

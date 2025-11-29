@class UILabel, JumpInfo, MMWebImageView;

@interface GCNotificationBarView : UIControl

@property (retain, nonatomic) MMWebImageView *leftIcon;
@property (retain, nonatomic) UILabel *notificationLabel;
@property (retain, nonatomic) MMWebImageView *rightIcon;
@property (retain, nonatomic) JumpInfo *jumpInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)configFromNotification:(id)a0;
- (void)layoutLabel:(id)a0 withText:(id)a1 width:(double)a2 lineHeight:(double)a3;
- (void)configureWithNotification:(id)a0;
- (void).cxx_destruct;

@end

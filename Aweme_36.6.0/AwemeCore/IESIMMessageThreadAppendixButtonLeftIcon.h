@class UIImageView, UIView, CAShapeLayer;

@interface IESIMMessageThreadAppendixButtonLeftIcon : UIView

@property (retain, nonatomic) CAShapeLayer *notchLayer;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIView *redDot;

- (void)setupSubView;
- (void)configRedDot:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end

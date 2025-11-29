@class UILongPressGestureRecognizer, AWEIMMessageAvatarImageView, CAShapeLayer, NSString, AWEIMMessageAvatarTagImageView, UITapGestureRecognizer;

@interface AWEIMMessageAvatarView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEIMMessageAvatarImageView *avatarImageView;
@property (retain, nonatomic) AWEIMMessageAvatarTagImageView *tagImageView;
@property (retain, nonatomic) CAShapeLayer *notchLayer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) BOOL tapEnable;
@property (nonatomic) BOOL doubleTapEnable;
@property (nonatomic) BOOL longPressEnable;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ doubleTapAction;
@property (copy, nonatomic) id /* block */ longPressAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupGesture;
- (void)p_avatarTapped:(id)a0;
- (void)p_didSetTagImage:(id)a0;
- (void)p_avatarDoubleTapped:(id)a0;
- (void)p_avatarLongPress:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end

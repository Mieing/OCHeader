@class UIView, NSString, UITapGestureRecognizer, UITextView, UIImageView, UIButton, UIPanGestureRecognizer, UILabel, UIColor;

@interface AWETeenUnderFourTeenAlertView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate>

@property (retain, nonatomic) UIView *alertContentView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *messageTextView;
@property (retain, nonatomic) UILabel *linkLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapBlankAreaToDismissGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapLinkLabelGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *swipeToDismissGesture;
@property (nonatomic) double originalBottomMargin;
@property (nonatomic) double originalLeftRightMargin;
@property (nonatomic) double maximumAlertContentViewHeight;
@property (retain, nonatomic) UIColor *maskBackgroundColor;
@property (nonatomic) double alertContentHeight;
@property (nonatomic) double currentSwipeOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double showTime;
@property (retain, nonatomic) NSString *UIID;
@property (retain, nonatomic) NSString *userType;
@property (copy, nonatomic) id /* block */ commonDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatterWithoutYear;

- (void)swipeToDismiss:(id)a0;
- (void)tapBlankAreaToDismiss;
- (void)rotated:(id)a0;
- (id)p_titleString;
- (void)tapCloseButton;
- (void)dismissWithCancelType:(id)a0;
- (void)p_setupUIWithComplianceSetting;
- (id)p_maskLayerWithHeight:(double)a0;
- (void)p_setupUIForTargetStyleWithComplianceSetting;
- (id)p_messageString;
- (id)p_appString;
- (id)p_bottomMessageString;
- (id)p_bottomButtonString;
- (void)tapActionButton;
- (void)p_stayTeenMode;
- (void)p_leaveTeenMode;
- (void)tapLinkLabelGestureAction;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)show;
- (id)initWithAlertType:(unsigned long long)a0;

@end

@class UIView, NSString, UITapGestureRecognizer, AWETeenModeAlignedImageView, UITextView, UIImageView, UIButton, UIPanGestureRecognizer, AWETeenModeAlertConfigModel, UILabel, UIColor;

@interface AWETeenModeAlertView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate>

@property (retain, nonatomic) UIView *alertContentView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) AWETeenModeAlignedImageView *backgroundImageView;
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
@property (nonatomic) long long type;
@property (retain, nonatomic) AWETeenModeAlertConfigModel *windowConfigModel;
@property (nonatomic) double showTime;
@property (retain, nonatomic) NSString *UIID;
@property (retain, nonatomic) NSString *userType;
@property (copy, nonatomic) id /* block */ commonDismissBlock;
@property (copy, nonatomic) id /* block */ clickOpenTeenModeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)swipeToDismiss:(id)a0;
- (void)tapBlankAreaToDismiss;
- (void)rotated:(id)a0;
- (void)tapCloseButton;
- (void)dismissWithCancelType:(id)a0;
- (void)p_setupUIWithComplianceSetting;
- (id)p_maskLayerWithHeight:(double)a0;
- (void)tapActionButton;
- (void)tapLinkLabelGestureAction;
- (id)initWithWindowConfigModel:(id)a0 andType:(long long)a1;
- (BOOL)p_shouldExtendToEdge;
- (BOOL)p_shouldShowMaskBackground;
- (void)p_trackEvent:(id)a0 withCommonParametersAndExtra:(id)a1;
- (void)p_setupUIForClassicStyleWithComplianceSetting;
- (id)p_fetchImageWithURL:(id)a0 andDefaultImage:(id)a1;
- (id)p_replacePlaceholderForString:(id)a0 withTextsAndLinks:(id)a1;
- (long long)p_getTeenModeAlertContentPositionType;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (BOOL)show;

@end

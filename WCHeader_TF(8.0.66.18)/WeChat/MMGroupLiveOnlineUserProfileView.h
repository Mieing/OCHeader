@class UIView, NSString, CContact, MMHeadImageView, CAShapeLayer, UIPanGestureRecognizer, RichTextView, MMUILabel, MMUIButton, UIVisualEffectView;

@interface MMGroupLiveOnlineUserProfileView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *profileDetailView;
@property (retain, nonatomic) UIView *maskingView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIVisualEffectView *visualEfView;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *displayNameLabel;
@property (retain, nonatomic) MMUILabel *genderLabel;
@property (retain, nonatomic) MMUILabel *placeLabel;
@property (retain, nonatomic) RichTextView *signatureLabel;
@property (retain, nonatomic) MMUIButton *comlaintButton;
@property (retain, nonatomic) MMUIButton *kickoutButton;
@property (retain, nonatomic) MMUIButton *cutLiveButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isSelf;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) BOOL isOpening;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double viewTopAtPanBegin;
@property (nonatomic) double previousPanPositionY;
@property (copy, nonatomic) id /* block */ complaintCallback;
@property (copy, nonatomic) id /* block */ kickoutCallback;
@property (copy, nonatomic) id /* block */ cutLiveCallback;
@property (copy, nonatomic) id /* block */ openedCallback;
@property (copy, nonatomic) id /* block */ closedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (void)updateWithUserName:(id)a0 roomId:(id)a1 isAnchor:(BOOL)a2 isAnchorHeadClicked:(BOOL)a3;
- (void)close;
- (void)closeWithAnimation:(BOOL)a0;
- (void)openWithAnimation:(BOOL)a0;
- (void)onComlaintButtonClicked;
- (void)onKickoutButtonClicked;
- (void)onCutLiveButtonClicked;
- (void)handleContentViewPanGesture:(id)a0;
- (void).cxx_destruct;

@end

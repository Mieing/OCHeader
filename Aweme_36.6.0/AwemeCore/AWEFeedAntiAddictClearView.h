@class UIView, NSString, UIImageView, NSTimer, AWEGradientView, UILabel, UIButton;
@protocol AWEFeedAntiAddictClearViewDisplayProtocol;

@interface AWEFeedAntiAddictClearView : UIView <UIGestureRecognizerDelegate, AWEAntiAddictNoticeMessage, AWEFeedAntiAddictClearViewProtocol>

@property (retain, nonatomic) AWEGradientView *placeHolderBackgroundView;
@property (retain, nonatomic) UIImageView *placeHolderImageView;
@property (nonatomic) BOOL showPlaceHolder;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *blockAfterLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIView *boardView;
@property (retain, nonatomic) UIButton *playerBtn;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double countDownValue;
@property (nonatomic) long long antiAddictType;
@property (nonatomic) unsigned long long noticeType;
@property (nonatomic) long long antiAddictCountDownTime;
@property (nonatomic) long long antiAddictBlockToTime;
@property (weak, nonatomic) id<AWEFeedAntiAddictClearViewDisplayProtocol> delegate;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL alreadyShrink;
@property (nonatomic) BOOL originalClipsToBounds;
@property (nonatomic) double originalBorderWidth;
@property (nonatomic) double originalCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmBtnAction;
- (void)systemBlockMaskConfigDidChange;
- (void)catchGesture:(id)a0;
- (void)trackUserAction:(id)a0;
- (id)timeStringFrom:(double)a0;
- (void)didClickPlayer;
- (void)updateAntiBlockTypeTitle;
- (void)actionClicked:(long long)a0;
- (void)beginAnimateWithView:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isShrink:(BOOL)a2 completion:(id /* block */)a3;
- (void)defaultShowInfoWithCompletion:(id /* block */)a0;
- (void)defaultShowInfo;
- (void)defaultShrink;
- (void)handleSwip:(struct CGPoint { double x0; double x1; })a0;
- (void)showWithDelayTime:(double)a0;
- (void)updateWithAntiModel:(id)a0;
- (void)stopTimer;
- (void)setUp;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)cancelAction;
- (void)leave;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupTimer;
- (void)setDisplayDelegate:(id)a0;
- (void)countDown;

@end

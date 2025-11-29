@class UIColor, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMSilverWingFeedBackViewDelegate;

@interface AWEIMSilverWingFeedBackView : UIView

@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UIImageView *dislikeImageView;
@property (retain, nonatomic) UIView *likeViewContainer;
@property (retain, nonatomic) UIView *dislikeViewContainer;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *postButton;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *imageViewColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (nonatomic) long long feedBackType;
@property (nonatomic) BOOL disableFeedBack;
@property (weak, nonatomic) id<AWEIMSilverWingFeedBackViewDelegate> delegate;

- (void)p_addGesture;
- (void)p_constraintSubViews;
- (void)p_onTapLikeButton;
- (void)p_onTapDislikeButton;
- (void)updateViewWithBackgroundImage:(BOOL)a0 isBright:(BOOL)a1 feedBackType:(long long)a2 disableFeedBack:(BOOL)a3 context:(id)a4;
- (void)updateViewWithBackgroundImage:(BOOL)a0 isBright:(BOOL)a1 feedBackType:(long long)a2 disableFeedBack:(BOOL)a3;
- (void)updateViewWithBackgroundImage:(BOOL)a0 isBright:(BOOL)a1 feedBackType:(long long)a2;
- (void)p_onTapPostButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

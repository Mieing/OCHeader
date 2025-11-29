@class NSString, UIImageView, UILabel, UIView;
@protocol IESLiveSlideButtonDelegate;

@interface IESLiveSlideButton : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectBgView;
@property (retain, nonatomic) UILabel *firstOption;
@property (retain, nonatomic) UILabel *secondOption;
@property (retain, nonatomic) UILabel *thirdOption;
@property (retain, nonatomic) UILabel *selectView;
@property (retain, nonatomic) UIView *selectShadowView;
@property (nonatomic) long long curOption;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *firstOptionTitle;
@property (retain, nonatomic) NSString *secondOptionTitle;
@property (retain, nonatomic) NSString *thirdOptionTitle;
@property (nonatomic) long long defaultOption;
@property (weak, nonatomic) id<IESLiveSlideButtonDelegate> delegate;
@property (nonatomic) BOOL enableSetting;
@property (retain, nonatomic) NSString *disableReason;

- (void)viewHide;
- (void)addGestureForButton;
- (void)buttonMoved:(id)a0;
- (BOOL)enableAdjustCheck;
- (void)startAnimationToOptionIfNeed:(long long)a0 click:(BOOL)a1;
- (double)getSafeCenterY:(double)a0;
- (double)calculateMidDelineationView1:(id)a0 view2:(id)a1;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end

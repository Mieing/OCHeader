@class UIButton, CSJMaterialMeta, NSArray, NSString, UILabel, CSJURitSettingModel;
@protocol CSJRewardedVideoTopBarDelegate;

@interface CSJRewardedVideoTopBarView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isRewardedVideo;
@property (retain, nonatomic) CSJURitSettingModel *ritModel;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *silentButton;
@property (retain, nonatomic) UILabel *leftSeconds;
@property (copy, nonatomic) NSArray *closeButtonWidthContraint;
@property (nonatomic) long long currentSecond;
@property (nonatomic) long long closeButtonStyle;
@property (nonatomic) long long rewardLeftSeconds;
@property (weak, nonatomic) id<CSJRewardedVideoTopBarDelegate> delegate;
@property (nonatomic) BOOL forceShowSkip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isRewardedVideo:(BOOL)a1 style:(long long)a2 ritModel:(id)a3 materialMeta:(id)a4;
- (void)updateCountButtonWithDisplayCount:(long long)a0 closeTime:(long long)a1;
- (void)updateRewardLeftSeconds:(long long)a0;
- (void)updateCountButtonWithSecond:(long long)a0 totalDuration:(long long)a1;
- (void)updateSilentButtonStatus:(long long)a0;
- (id)c_xyDict;
- (void)p_initializeData;
- (long long)fullScreenSkipDelaySecond;
- (void)buidupViewsForRewardNormal;
- (void)buidupViewsForFullScreenNormal;
- (void)buidupViewsForDislike;
- (void)buildUpViewsForFullScreenImageShowDislike:(BOOL)a0;
- (double)sizeScaleRatio;
- (void)updateCloseButtonTextWithStr:(id)a0;
- (BOOL)fullScreenShowSkipCountdown;
- (double)getButtonWidthWithStr:(id)a0;
- (void)addFullScreenImageConstraints;
- (void)videoBarTapped;
- (void)silentButtonTapped:(id)a0;
- (void)updateCloseButtonForNormalWithSecond:(long long)a0 totalDuration:(long long)a1;
- (void)updateCloseButtonForDislikeWithSecond:(long long)a0 totalDuration:(long long)a1;
- (long long)rewardSkipDelaySecond;
- (void)updateDislikeButton_Countdown;
- (void)updateDislikeButton_CountdownAndSkip;
- (void)updateDislikeButton_CountdownAndCanbeTurnedOffAfter;
- (void)updateDislikeButton_Skip;
- (void)updateDislikeButton_CanbeTurnedOffAfter;
- (void)pbu_updateCloseButtonImage;
- (void)pbu_updateCountButtonWithDisplayCount:(long long)a0 closeTime:(long long)a1;
- (void)updateDislikeButton_frame;
- (void)updateIntersititalImage;
- (void)addAccessibilityIdentifier;
- (double)getCloseButtonWidthWithStr:(id)a0;
- (void)buildUpView;
- (void)addGesture;
- (void)dislikeButtonTapped:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)closeButtonTapped:(id)a0;
- (void)showCloseButton;

@end

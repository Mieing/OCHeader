@class AWEPlayInteractionLLMBottomBtn, UIImageView, NSString, UILabel, AWEInteractBarModel;

@interface AWEPlayInteractionLLMBottomView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEInteractBarModel *interactBarModel;
@property (nonatomic) long long currentViewStatus;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UILabel *firstTitleLabel;
@property (retain, nonatomic) AWEPlayInteractionLLMBottomBtn *firstLeftButton;
@property (retain, nonatomic) AWEPlayInteractionLLMBottomBtn *firstRightButton;
@property (retain, nonatomic) UILabel *secondTitleLabel;
@property (retain, nonatomic) AWEPlayInteractionLLMBottomBtn *secondButton;
@property (retain, nonatomic) UILabel *thirdTitleLabel;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTooManyTextForInteractBar:(id)a0;
+ (double)titleLabelWidthWithText:(id)a0;
+ (id)titleLabelFont;

- (void)updateByModel:(id)a0;
- (void)changeToStatus:(long long)a0 animated:(BOOL)a1;
- (void)buttonActionTriger:(id)a0;
- (void)updateFirstLeftButton;
- (void)updateAimStatus:(long long)a0 show:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateUI;
- (void)initUI;
- (double)suggestedHeight;

@end

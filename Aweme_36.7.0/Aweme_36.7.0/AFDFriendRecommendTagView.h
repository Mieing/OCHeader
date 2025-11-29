@class UIButton, AFDFriendRecommendTagModel, AFDFriendRecommendTagViewConfig, NSString, UILabel, AFDFriendRecommendMultiAvatarView, UIView;
@protocol AFDFriendRecommendTagViewDelegate;

@interface AFDFriendRecommendTagView : UIView <AFDFriendRecommendTagViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AFDFriendRecommendMultiAvatarView *avatarView;
@property (retain, nonatomic) UILabel *userTextLabel;
@property (retain, nonatomic) UILabel *infoTextLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *avatarViewSnapshot;
@property (retain, nonatomic) AFDFriendRecommendTagModel *model;
@property (retain, nonatomic) AFDFriendRecommendTagViewConfig *config;
@property (weak, nonatomic) id<AFDFriendRecommendTagViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAvatarView;
- (BOOL)isActiveOfView:(id)a0;
- (void)didAppearWithAnimation;
- (void)didShowBubbleView;
- (void)didClickRecommendTagView;
- (BOOL)shouldShowAnimationWithModel:(id)a0;
- (void)updateUIWithAnimation;
- (void)showGuidePopoverIfNeeded;
- (void)updateRightBtn;
- (void)updateWidth;
- (double)calculateLabelWidth:(id)a0;
- (double)calculateTotalWidthWithUserTextLabelWidth:(double)a0 infoTextLabelWidth:(double)a1;
- (void)updateAttributedTextForInfoTextLabelWithMaxWidth:(double)a0;
- (void)updateAttributedTextForUserTextLabelWithMaxWidth:(double)a0;
- (id)textAttribute;
- (id)bubbleContainerView;
- (void)didClickRightBtn;
- (id)infoLabelIconAttachment;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateText;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithModel:(id)a0;

@end

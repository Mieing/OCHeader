@class WCFinderSizingRichTextView, UIImageView, WCFinderThanksButton, UIView, UILabel, NSMutableArray;
@protocol WCFinderThanksButtonDelegate;

@interface WCFinderFriendLikeDisplayFriendLikeView : WCFinderFriendLikeDisplayBaseView

@property (retain, nonatomic) WCFinderSizingRichTextView *nickNameTextView;
@property (retain, nonatomic) WCFinderSizingRichTextView *appendTipsView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *avatorContainerView;
@property (retain, nonatomic) UILabel *likeInfoLabel;
@property (retain, nonatomic) UILabel *likeCountAnimationLabel;
@property (nonatomic) double headViewLeft;
@property (nonatomic) double nameLabelLeft;
@property (nonatomic) double likeIconViewCenterX;
@property (nonatomic) double likeCountLabelLeft;
@property (retain, nonatomic) NSMutableArray *roundHeaderViews;
@property (weak, nonatomic) id<WCFinderThanksButtonDelegate> thankDelegate;
@property (retain, nonatomic) WCFinderThanksButton *thanksButton;

- (id)createThankButton;
- (void)setUpUI;
- (void)setUpComboLikeView;
- (void)updateWithViewModel:(id)a0;
- (void)layoutUIWithLikeInfoLeft:(double)a0;
- (void)prepareComboLikeAnimation;
- (void)displayComboLikeAnimationWithComplection:(id /* block */)a0;
- (void)_startAnimationWithCount:(long long)a0 totalDisplayCount:(long long)a1 resultLikeCount:(unsigned long long)a2 complection:(id /* block */)a3;
- (id)changeScaleAnimationWithCurrentNumber:(unsigned long long)a0 count:(unsigned long long)a1;
- (id)endComboLikeAnimationWithComplection:(id /* block */)a0;
- (void)layoutWithLikeAnimation:(BOOL)a0 infoTips:(id)a1;
- (void)recoverAnimation;
- (void)relayoutInfo;
- (void)setLikeAnimationLabelCount:(long long)a0;
- (void)willMoveToWindow:(id)a0;
- (void).cxx_destruct;

@end

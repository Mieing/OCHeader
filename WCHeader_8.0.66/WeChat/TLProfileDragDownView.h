@class UIView, TLProfileLikeButton, TLProfileModel, CAGradientLayer, RichTextView, CContact, UILabel, MMUIButton;
@protocol TLProfileDragDownViewDelegate;

@interface TLProfileDragDownView : UIView

@property (weak, nonatomic) id<TLProfileDragDownViewDelegate> delegate;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) TLProfileModel *tlProfile;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUIButton *headButton;
@property (retain, nonatomic) UIView *headImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (retain, nonatomic) MMUIButton *toolButton;
@property (retain, nonatomic) MMUIButton *toolButtonIcon;
@property (retain, nonatomic) UILabel *toolButtonLabel;
@property (retain, nonatomic) TLProfileLikeButton *likeButton;
@property (retain, nonatomic) RichTextView *descTextView;
@property (retain, nonatomic) UIView *moreContainerView;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (id)initWithDelegate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)initContainerView;
- (void)initMoreContainerView;
- (void)initGradientLayer;
- (void)updateWithContact:(id)a0 profileModel:(id)a1;
- (void)layoutSubviews;
- (void)layoutSubviewsInContainerView;
- (void)layoutSubviewsInMoreContainerView;
- (void)onTapMoreButton;
- (void)onTapDetailButton;
- (void)onTapHeadButton;
- (void)onTapChangeCover;
- (void).cxx_destruct;

@end

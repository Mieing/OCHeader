@class UIImageView, IESLiveSmallRedEnvelopeAnimationAvatar, UILabel;

@interface IESLiveSmallRedEnvelopeAnimationView : UIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar *firstAvatarView;
@property (retain, nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar *secondAvatarView;
@property (retain, nonatomic) IESLiveSmallRedEnvelopeAnimationAvatar *thirdAvatarView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *diamondLabel;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)updateWithAvatars:(id)a0 totalDiamond:(id)a1 backgroungImage:(id)a2;
- (id)buildRichTextForDiamond:(id)a0;
- (void)setupAvatar:(id)a0 user:(id)a1 cornerRadius:(double)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTapView;

@end

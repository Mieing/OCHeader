@class UIImageView, UILabel, UIView;

@interface IESLiveAICloneGuideView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *singleAvatar;
@property (retain, nonatomic) UIView *tagContainer;
@property (retain, nonatomic) UILabel *queryLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIImageView *bubbleArrow;
@property (nonatomic) double guideWidth;
@property (copy, nonatomic) id /* block */ tapGuideBlock;

- (void)tapContent;
- (void)upateWithAIGuideInfo:(id)a0;
- (void)showInView:(id)a0 atTopOf:(id)a1 perferAlignToView:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end

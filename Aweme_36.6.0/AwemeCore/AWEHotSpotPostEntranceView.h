@class UIImageView, UILabel;

@interface AWEHotSpotPostEntranceView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *despLabel;
@property (copy, nonatomic) id /* block */ postHandleBlock;

+ (id)postEntranceView;

- (void)configureUI;
- (void)recoverNormalBGColor;
- (void)postViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

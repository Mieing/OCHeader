@class UIImageView, UIView;

@interface MMFinderLiveMusicRelatedSettingTableFooterView : UIView

@property (retain, nonatomic) UIView *leftEndLine;
@property (retain, nonatomic) UIView *rightEndLine;
@property (retain, nonatomic) UIImageView *centerDot;
@property (retain, nonatomic) UIView *customSeparatorView;
@property (nonatomic) BOOL enableDisplayEndState;
@property (nonatomic) double separatorLeftMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCustomSeparatorView;
- (void)layoutCenterDot;
- (void)layoutLeftEndLine;
- (void)layoutRightEndLine;
- (void)displayEndState;
- (void)hideEndState;
- (void).cxx_destruct;

@end

@class UILabel, UIImageView;

@interface IESLiveEmoticonHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *tagImageView;

- (void)updateGroupTitle:(id)a0;
- (void)addGroupTag:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

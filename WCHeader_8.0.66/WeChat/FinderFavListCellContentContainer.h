@class UILabel, UIImageView, WCFinderInteractionLabelGroupView;

@interface FinderFavListCellContentContainer : UIView

@property (copy, nonatomic) id /* block */ clickNicknameBlock;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *finderLogoView;
@property (retain, nonatomic) WCFinderInteractionLabelGroupView *nicknameTailLabel;
@property (retain, nonatomic) WCFinderInteractionLabelGroupView *bottomInteractLabel;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithFavInfo:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)clickNickNameAction;
- (void).cxx_destruct;

@end

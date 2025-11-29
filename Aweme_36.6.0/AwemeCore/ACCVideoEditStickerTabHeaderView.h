@class UILabel, DUXButton;

@interface ACCVideoEditStickerTabHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *moreButton;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)clickMoreButton;
- (void)configViewWith:(id)a0 enablePackUp:(BOOL)a1;
- (void)updateMoreButtonStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

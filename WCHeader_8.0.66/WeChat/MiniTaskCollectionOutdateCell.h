@class UIImageView, UIView, MMUIButton, MMUILabel;

@interface MiniTaskCollectionOutdateCell : MiniTaskCollectionBaseCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *extraIconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *bizIconView;
@property (retain, nonatomic) MMUIButton *favButton;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (retain, nonatomic) UIView *bottomLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)snapShotView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuPopoverFrame;
- (void)initUI;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)setViewModel:(id)a0;
- (void)setIsEditing:(BOOL)a0;
- (void)prepareForReuse;
- (void)onSelectAtClose;
- (void)onSelectAtFav;
- (void).cxx_destruct;

@end

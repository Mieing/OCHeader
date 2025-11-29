@class UIFont, AWEPOIAlbumTabInfoModel, UILabel, UIView;

@interface AWEPOIAlbumLabelCell : UICollectionViewCell

@property (retain, nonatomic) UIFont *defaultFont;
@property (retain, nonatomic) UILabel *labelTitle;
@property (retain, nonatomic) UILabel *labelCount;
@property (retain, nonatomic) UIView *labelContainer;
@property (retain, nonatomic) AWEPOIAlbumTabInfoModel *labelModel;
@property (nonatomic) BOOL selectedStatus;
@property (copy, nonatomic) id /* block */ selectedBlock;

- (void)changeToSelectStatus;
- (void)changeToUnSelectStatus;
- (void)onClickAction;
- (void)setLabelTitleText:(id)a0;
- (void)setLabelCountText:(id)a0;
- (void)updateWithModel:(id)a0 isSelected:(unsigned char)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

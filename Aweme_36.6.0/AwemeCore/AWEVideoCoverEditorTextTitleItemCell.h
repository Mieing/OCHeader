@class ACCAnimatedButton, AWECoverTextTitleModel;

@interface AWEVideoCoverEditorTextTitleItemCell : UICollectionViewCell

@property (retain, nonatomic) AWECoverTextTitleModel *model;
@property (retain, nonatomic) ACCAnimatedButton *titleBtn;
@property (nonatomic) BOOL isSelected;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

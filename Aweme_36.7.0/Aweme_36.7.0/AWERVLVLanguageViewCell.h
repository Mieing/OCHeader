@class UILabel, AWELongVideoMetaLanguageInfoModel, UIView;

@interface AWERVLVLanguageViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *languageLabel;
@property (retain, nonatomic) AWELongVideoMetaLanguageInfoModel *languageModel;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

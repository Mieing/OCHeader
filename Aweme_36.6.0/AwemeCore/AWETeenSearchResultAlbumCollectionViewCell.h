@class AWEMinorAlbum, UIImageView, UILabel, NSDictionary;

@interface AWETeenSearchResultAlbumCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEMinorAlbum *model;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSDictionary *logDict;

- (void)p_updateCover;
- (void)configCellWithModel:(id)a0 currentIndex:(unsigned long long)a1;
- (void)configCellWithResultModel:(id)a0 currentIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

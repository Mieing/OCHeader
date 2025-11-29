@class NSString, UILabel;

@interface EditVideoBGMSearchTagCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) UILabel *tagLabel;

+ (struct CGSize { double x0; double x1; })sizeForItem:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addTagNameLabel;
- (void)updataWithItem:(id)a0;
- (void).cxx_destruct;

@end

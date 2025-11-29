@class UIImageView, NSString;

@interface AWECoverEditThumbCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (copy, nonatomic) NSString *projectUUID;

+ (id)cellIdentifier;

- (void)updateImage:(id)a0;
- (void)updateSelectedState:(BOOL)a0;
- (void)updateMediaType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

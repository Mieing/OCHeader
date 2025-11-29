@class UIImageView;

@interface AWEECOMIMEmoticonPackageItem : UICollectionViewCell

@property (retain, nonatomic) UIImageView *emoticonView;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)reloadItemWithURL:(id)a0 displayName:(id)a1 showBkgColor:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

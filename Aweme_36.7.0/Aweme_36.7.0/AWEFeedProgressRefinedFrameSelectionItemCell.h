@class UIImageView, UILabel, UIView;

@interface AWEFeedProgressRefinedFrameSelectionItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *blackView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *leftSeparatorLine;
@property (retain, nonatomic) UIView *rightSeparatorLine;

+ (id)reuseIdentifier;

- (void)updateDescLabel:(id)a0;
- (void)configWithImage:(id)a0 desc:(id)a1;
- (void)setupChapterUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (id)currentImage;
- (void)setupUI;

@end

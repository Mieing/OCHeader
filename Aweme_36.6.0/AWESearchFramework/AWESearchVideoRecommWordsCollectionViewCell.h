@class UILabel, UIImageView, NSString;

@interface AWESearchVideoRecommWordsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *searchIconView;
@property (retain, nonatomic) UIImageView *wordImageView;
@property (retain, nonatomic) NSString *imageUrl;

+ (double)itemWidthWithText:(id)a0;
+ (double)itemWidthWithText:(id)a0 withImage:(id)a1;
+ (id)identifier;

- (void)buildViews;
- (void)updateWithText:(id)a0 withImage:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

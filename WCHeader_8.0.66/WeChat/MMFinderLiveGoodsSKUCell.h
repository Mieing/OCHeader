@class MMPaddingView, NSString, UILabel, UIView, MMWebImageView;

@interface MMFinderLiveGoodsSKUCell : UICollectionViewCell

@property (retain, nonatomic) UIView *sellOutMaskView;
@property (retain, nonatomic) UIView *pressedMaskView;
@property (retain, nonatomic) MMPaddingView *sellOutLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) BOOL isSellOut;

+ (double)cellHeightWithoutImageSize;
+ (struct CGSize { double x0; double x1; })cellWithoutImageSizeForText:(id)a0;
+ (struct CGSize { double x0; double x1; })cellWithImageSizeWithMaxNumberOfLines:(unsigned long long)a0;
+ (id)textFont;
+ (double)widthWithImage;
+ (unsigned long long)numberOfLinesWithImageForText:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end

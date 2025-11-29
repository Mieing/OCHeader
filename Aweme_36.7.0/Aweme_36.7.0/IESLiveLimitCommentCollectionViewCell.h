@class NSString, UIImageView, UIImage, UILabel;

@interface IESLiveLimitCommentCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *selectImage;
@property (retain, nonatomic) NSString *selectColor;
@property (retain, nonatomic) NSString *unselectColor;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) long long index;
@property (copy, nonatomic) id /* block */ tapCallBack;

+ (struct CGSize { double x0; double x1; })sizeForString:(id)a0;

- (void)updateTheme:(BOOL)a0;
- (void)longGesture:(id)a0;
- (void)targetAction:(id)a0;
- (void)updateSelectImage;
- (void)updateNormalImage;
- (void).cxx_destruct;
- (void)initialize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

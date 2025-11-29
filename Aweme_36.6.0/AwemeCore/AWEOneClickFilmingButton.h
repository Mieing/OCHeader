@class UIColor, NSString, UIImageView, UIImage, UILabel;

@interface AWEOneClickFilmingButton : UIControl <AWEOneClickFilmingButtonProtocol>

@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *disableImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIColor *customTitleColor;
@property (retain, nonatomic) UIImage *previewImage;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL centerContent;
@property (nonatomic) BOOL available;
@property (nonatomic) BOOL fromMVPage;
@property (nonatomic) BOOL isSimpleStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTitleColor:(id)a0;
- (void)updateToPreview:(BOOL)a0;
- (void)updateTitleStyle:(id)a0;
- (void)updateBtnWithAssetsCount:(long long)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (double)buttonHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)updateStyle:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

@class NSString, UIImageView, NSURL, UILabel, UIImage, UIView;

@interface AWEBottomSupernatantView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *showImage;
@property (retain, nonatomic) UIView *onlineView;
@property (retain, nonatomic) UIImageView *secondImageView;
@property (retain, nonatomic) NSURL *secondImageURL;

- (void)_createUIComponents;
- (id)initWithText:(id)a0 imageURLs:(id)a1;
- (id)initWithText:(id)a0 imageURL:(id)a1 online:(BOOL)a2;
- (id)initWithText:(id)a0 imageURL:(id)a1;
- (id)initWithText:(id)a0 image:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

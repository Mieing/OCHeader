@class NSString, NSURL, UIImage;

@interface CJPayImageView : UIImageView

@property (copy, nonatomic) NSString *originImageName;
@property (copy, nonatomic) NSURL *originImageUrl;
@property (retain, nonatomic) UIImage *originImage;
@property (nonatomic) long long imageContentType;
@property (copy, nonatomic) NSString *darkModeImageName;
@property (copy, nonatomic) NSURL *darkModeImageUrl;
@property (retain, nonatomic) UIImage *darkModeImage;

- (id)setImageWithURL:(id)a0;
- (void)setImageWithName:(id)a0;
- (void)setImageWithName:(id)a0 completion:(id /* block */)a1;
- (id)setImageWithURL:(id)a0 placeholder:(id)a1;
- (id)setImageWithURL:(id)a0 placeholder:(id)a1 completion:(id /* block */)a2;
- (void)cj_adapterForLocalTheme:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end

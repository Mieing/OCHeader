@class UIColor, UIImageView, UIImage, UILabel, NSError, UIButton;

@interface AWESearchSynthesisNovelFailView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *retryBtn;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ onFailReloadHandler;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *netFailedImage;
@property (retain, nonatomic) UIImage *netFailedDarkImage;

- (void)handleError;
- (void)configSubViewsLayout;
- (void)onReloadAction:(id *)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 error:(id)a1;

@end

@class NSString, UIImageView, UIImage, UILabel;

@interface AWEElderModeContentItemView : UIView

@property (retain, nonatomic) UIImage *iconImg;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)initWithImage:(id)a0 andText:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end

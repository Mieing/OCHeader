@class UIImageView, UILabel, NSString;

@interface WXGDownloadSessionItemCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *selectedImage;
@property (retain, nonatomic) UIImageView *resourceIcon;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) NSString *userName;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateSessionItem:(id)a0 size:(unsigned long long)a1 selected:(BOOL)a2;
- (void).cxx_destruct;

@end

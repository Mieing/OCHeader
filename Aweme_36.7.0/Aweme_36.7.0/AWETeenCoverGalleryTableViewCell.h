@class UIImageView, AWEAnimatedButton;

@interface AWETeenCoverGalleryTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEAnimatedButton *settingButton;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) id /* block */ cellTapBlock;

+ (double)cellHeight;

- (void)settingButtonTap:(id)a0;
- (void)setCoverImage:(id)a0 selected:(BOOL)a1 index:(long long)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end

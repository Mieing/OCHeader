@class UIImage, IESLiveImageView;

@interface IESLiveToolbarShareSectionView : UIView

@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) IESLiveImageView *avatatView;
@property (retain, nonatomic) IESLiveImageView *shareContentView;
@property (retain, nonatomic) IESLiveImageView *contentView;

- (void)setupSubviews:(BOOL)a0;
- (id)initWithAvatarImage:(id)a0 isGroupChat:(BOOL)a1;
- (void)updateWithBGImage:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

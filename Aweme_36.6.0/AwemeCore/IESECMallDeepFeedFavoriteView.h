@class UIImage, UILabel, IESECUIImageView;

@interface IESECMallDeepFeedFavoriteView : UIView

@property (retain, nonatomic) UIImage *mallDeepFeedFavorite;
@property (retain, nonatomic) UIImage *mallDeepFeedFavoriteSelected;
@property (retain, nonatomic) IESECUIImageView *favoriteButtonImageView;
@property (retain, nonatomic) UILabel *favoriteLabel;
@property (nonatomic) long long collectCount;
@property (nonatomic) BOOL selected;

- (void)updateWithModel:(id)a0 font:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

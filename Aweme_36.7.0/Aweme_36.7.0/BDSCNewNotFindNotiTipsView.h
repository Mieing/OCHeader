@class UILabel, BDSCImageView;

@interface BDSCNewNotFindNotiTipsView : UIView

@property (retain, nonatomic) BDSCImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isLandscape;

- (id)localConfig;
- (void)setupSubviewsWithTitle:(id)a0;
- (id)initWithImage:(id)a0 Title:(id)a1;
- (id)initWithImageNamed:(id)a0 Title:(id)a1;
- (id)initWithImageUrl:(id)a0 Title:(id)a1;
- (double)iconSize;
- (void).cxx_destruct;
- (double)margin;
- (id)textColor;
- (double)fontSize;

@end

@class UILabel, NSString, BDImageView;

@interface AWEMusicCardPlaylistAnchorHeaderView : UIView

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *ownerLabel;
@property (retain, nonatomic) UILabel *collectCountLabel;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *owerName;
@property (nonatomic) long long collectCount;

+ (double)viewHeight;

- (void)updateWithPlaylistInfo:(id)a0;
- (void)setupSubview;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

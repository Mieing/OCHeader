@class UIImageView, UILabel, TingCategoryCoverView;

@interface WCFinderProfilePlaylistItemCell : UICollectionViewCell

@property (retain, nonatomic) TingCategoryCoverView *coverView;
@property (retain, nonatomic) UIImageView *normalCoverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) struct CGSize { double width; double height; } cacheSize;
@property (retain, nonatomic) UIImageView *playInfoIconView;
@property (retain, nonatomic) UILabel *playInfoLabel;
@property (nonatomic) BOOL firstColumn;
@property (nonatomic) BOOL isAuthor;
@property (retain, nonatomic) id model;
@property (nonatomic) void /* function */ *updater;

+ (double)displayHeight:(double)a0 firstColumn:(BOOL)a1 showPlayInfo:(BOOL)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)doLayout;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

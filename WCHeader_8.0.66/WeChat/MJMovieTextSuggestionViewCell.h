@class UILabel;

@interface MJMovieTextSuggestionViewCell : UICollectionViewCell

@property (nonatomic) BOOL isEnabledViewerNumberLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *viewerNumberLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)setupWithItem:(id)a0;
- (void)updateLayoutWithItem:(id)a0;
- (void).cxx_destruct;

@end

@class UILabel;

@interface AWESearchSugGuessWordCell : UICollectionViewCell

@property (nonatomic, getter=isWhiteStyle) BOOL whiteStyle;
@property (retain, nonatomic) UILabel *contentLabel;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)configureUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

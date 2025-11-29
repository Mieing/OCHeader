@class UIImageView, UILabel, UIView;

@interface AWEfavoriteListFileNewCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIImageView *fileCoverImageView;
@property (retain, nonatomic) UILabel *fileNameLabel;
@property (retain, nonatomic) UILabel *addToSeeLaterLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UIImageView *seeLaterView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) BOOL isFakeDefaultFolderCell;

+ (id)identifier;

- (void)configWithCoverUrl:(id)a0 withFileName:(id)a1;
- (void)configWithCoverImage:(id)a0 withFileName:(id)a1;
- (void)configLockViewWithSecret:(BOOL)a0;
- (void)updateSeeLaterViewWithHidden:(BOOL)a0 hideLabel:(BOOL)a1;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end

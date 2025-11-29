@class UILabel;

@interface AWESearchVideoCardChapterListViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) BOOL selectedStatus;

+ (double)widthWithString:(id)a0;
+ (id)identifier;
+ (id)normalFont;
+ (id)boldFont;

- (void)updateSelectedStatus:(BOOL)a0;
- (void)configDataWithChapterInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

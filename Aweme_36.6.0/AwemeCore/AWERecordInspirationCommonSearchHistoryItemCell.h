@class UILabel, UIImageView;

@interface AWERecordInspirationCommonSearchHistoryItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *photoView;
@property (nonatomic) BOOL isEditStatus;

+ (id)displaySearchContent:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithSearchContent:(id)a0 isEditStatus:(BOOL)a1;

- (void)updateEditStatus:(BOOL)a0;
- (void)configureWithSearchContent:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutUI;

@end

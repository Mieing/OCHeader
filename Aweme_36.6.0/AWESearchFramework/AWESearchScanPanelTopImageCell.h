@class AWESearchScanSearchTabViewModel, UIImageView, UILabel, UIView;

@interface AWESearchScanPanelTopImageCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *searchImage;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) AWESearchScanSearchTabViewModel *model;
@property (nonatomic) BOOL isScanQuestionMode;
@property (nonatomic) BOOL currentSelectedTabIsScanQuestion;

+ (id)reuseIdentifier;

- (void)updateImage:(id)a0;
- (void)updateUIWithMode:(BOOL)a0 index:(long long)a1;
- (void)updateImageWithUrl:(id)a0;
- (id)getCellImage;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

@class UIColor, UIImageView, IESLiveSoloKTVMVListItemModel, UILabel, IESLiveSoloKTVLoadingUtil;

@interface IESLiveSoloKTVMVListViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverIV;
@property (retain, nonatomic) UIImageView *downloadIV;
@property (retain, nonatomic) IESLiveSoloKTVLoadingUtil *loadingUtil;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) IESLiveSoloKTVMVListItemModel *model;
@property (nonatomic) long long scaleRatio;

- (void)dismissLoading;
- (void)initView;
- (void)updateSelected:(BOOL)a0;
- (void)updateDownloadStatus;
- (void)initViewIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateModel:(id)a0;
- (void)showLoading;

@end

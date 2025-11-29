@class AWEOfflineVideoResourceCellModel, AWEOfflineDetailVCDelegate, UIImageView, AWEVerticalAlignedLabel, UILabel, UIView, NSString;

@interface AWEOfflineVideoMixGroupResourceCell : AWEIMSwipeCollectionViewCell <AWEOfflineVideoCenterCell>

@property (retain, nonatomic) UIImageView *cover;
@property (retain, nonatomic) AWEVerticalAlignedLabel *titleLabel;
@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *userName;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *fileNotExistLabel;
@property (retain, nonatomic) UIImageView *mixIcon;
@property (retain, nonatomic) UIView *mixCountContainer;
@property (retain, nonatomic) UIImageView *mixCountIcon;
@property (retain, nonatomic) UILabel *mixCountLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) AWEOfflineVideoResourceCellModel *cellModel;
@property (retain, nonatomic) AWEOfflineDetailVCDelegate *detailVCDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgressLabel;
- (BOOL)isAllVideoFileMissing:(id)a0;
- (int)lostFileModelCount:(id)a0;
- (void)showAllVideoFileNotExistDialog:(id)a0;
- (void)enterDetailVC:(id)a0;
- (void)showPartVideoFileNotExistDialog:(id)a0;
- (void)trackDelete;
- (void)bindDataWithIndex:(long long)a0 model:(id)a1;
- (void)didSelectedWithIndex:(long long)a0 model:(id)a1;
- (void)addDelegate:(id)a0 toVC:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)deleteCell;

@end

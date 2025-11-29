@class AWEOfflineVideoResourceCellModel, AWEOfflineDetailVCDelegate, UIImageView, AWEVerticalAlignedLabel, UILabel, NSString;

@interface AWEOfflineVideoSingleResourceCell : AWEIMSwipeCollectionViewCell <AWEOfflineVideoCenterCell>

@property (retain, nonatomic) UIImageView *cover;
@property (retain, nonatomic) AWEVerticalAlignedLabel *titleLabel;
@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *userName;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *fileNotExistLabel;
@property (retain, nonatomic) AWEOfflineVideoResourceCellModel *cellModel;
@property (retain, nonatomic) AWEOfflineDetailVCDelegate *detailVCDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)coverMaskView;
- (void)trackDelete;
- (void)bindDataWithIndex:(long long)a0 model:(id)a1;
- (void)didSelectedWithIndex:(long long)a0 model:(id)a1;
- (void)updateDebugLabelIfNeedWithModel:(id)a0;
- (void)showFileNotExistDialog:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)deleteCell;

@end

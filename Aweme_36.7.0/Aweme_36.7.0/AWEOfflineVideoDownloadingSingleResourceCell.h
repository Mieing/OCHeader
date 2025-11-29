@class AWEBinding, UIImageView, AWEVerticalAlignedLabel, UILabel, AWEOfflineVideoSingleResourceModel, AWEOfflineVideoDownloadProgressView;

@interface AWEOfflineVideoDownloadingSingleResourceCell : AWEIMSwipeCollectionViewCell

@property (retain, nonatomic) UIImageView *cover;
@property (retain, nonatomic) AWEVerticalAlignedLabel *titleLabel;
@property (retain, nonatomic) UILabel *speedLabel;
@property (retain, nonatomic) UILabel *cacheSizeLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) AWEOfflineVideoDownloadProgressView *progressView;
@property (retain, nonatomic) AWEOfflineVideoSingleResourceModel *cellModel;
@property (retain, nonatomic) AWEBinding *binding;

- (void)trackDelete;
- (void)bindDataWithIndex:(long long)a0 model:(id)a1;
- (void)didSelectedWithIndex:(long long)a0 model:(id)a1;
- (void)singleResourceModelUpdate:(id)a0;
- (void)updateDebugLabelIfNeedWithModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)deleteCell;

@end

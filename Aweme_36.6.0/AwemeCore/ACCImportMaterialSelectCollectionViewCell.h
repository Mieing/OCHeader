@class AWEGradientView, NSIndexPath, UIImageView, ACCImportMaterialSelectCollectionViewCellModel, UIView, UILabel, UIButton;

@interface ACCImportMaterialSelectCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *thumbnailImageMaskView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *faceHintLabel;
@property (retain, nonatomic) UIImageView *livePhotoIconImageView;
@property (retain, nonatomic) UIView *switchAIAvatarBGView;
@property (retain, nonatomic) UIImageView *switchAIAvatarImageView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UILabel *aiAvatarLabel;
@property (nonatomic) int requestImageID;
@property (copy, nonatomic) id /* block */ deleteAction;
@property (copy, nonatomic) NSIndexPath *currentIndexPath;
@property (retain, nonatomic) ACCImportMaterialSelectCollectionViewCellModel *cellModel;

- (void)p_setupThumbnailImageViewWithAssetModel:(id)a0;
- (void)onDeleteAction:(id)a0;
- (void)bindModel:(id)a0 isDynamicMusicTemplateSlot:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)cellCornerRadius;
- (void)setupUI;

@end

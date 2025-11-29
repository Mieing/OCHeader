@class AWEOpenShareAlbumVideoModel, UIImageView, CAKGradientView, UIView, UILabel, UIButton;

@interface AWEOpenShareAlbumCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) CAKGradientView *selectedGradientView;
@property (retain, nonatomic) UIView *videoCellMaskView;
@property (retain, nonatomic) UIView *selectedCellMaskView;
@property (retain, nonatomic) UIView *overlay;
@property (retain, nonatomic) UIImageView *unCheckImageView;
@property (retain, nonatomic) UIImageView *numberBackGroundImageView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *playNumberLabel;
@property (retain, nonatomic) UILabel *hasSelectHintLabel;
@property (retain, nonatomic) UIButton *leftTopAreaTag;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UIButton *lastSelectedTagView;
@property (retain, nonatomic) UIButton *topTagView;
@property (retain, nonatomic) UIButton *unionTagView;
@property (nonatomic) BOOL animationFinished;
@property (nonatomic) BOOL shouldAdjustThumbnailImageViewContentMode;
@property (retain, nonatomic) UIView *selectPhotoView;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } selectedTransformScale;
@property (retain, nonatomic) AWEOpenShareAlbumVideoModel *model;
@property (copy, nonatomic) id /* block */ didSelectedAssetBlock;
@property (copy, nonatomic) id /* block */ didPressVideoThumbnail;

+ (id)identifier;

- (void)refreshUIWithModel:(id)a0;
- (id)getResCountString:(long long)a0;
- (void)configleftTopAreaTag;
- (void)setUpPlayImageView;
- (void)selectAssetButtonClick:(id)a0;
- (void)videoThumbnailPressed;
- (void)showAlreadySelectedHint:(BOOL)a0;
- (double)checkImageHeight;
- (void)configureUI:(long long)a0 maxSelect:(long long)a1;
- (void)updateSelectStatus;
- (void).cxx_destruct;
- (id)thumbnailImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

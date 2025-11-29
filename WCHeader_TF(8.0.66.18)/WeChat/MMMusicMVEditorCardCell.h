@class MMMusicMVEpisodeItemCellView, NSString, MMMusicLiveLyricDisplayView, MMMusicMVEditorCardSlider, UIImageView, UIButton, CAShapeLayer, MMMusicMVTrackItem;
@protocol MMMusicMVEditorCardCellDelegate;

@interface MMMusicMVEditorCardCell : UICollectionViewCell <MMMusicMVEditorCardSliderDelegate, MMMusicMVEpisodeItemCellViewDelegate>

@property (retain, nonatomic) MMMusicMVTrackItem *cellModel;
@property (retain, nonatomic) MMMusicMVEditorCardSlider *slider;
@property (retain, nonatomic) MMMusicMVEpisodeItemCellView *videoView;
@property (retain, nonatomic) UIImageView *defaultBgImageView;
@property (retain, nonatomic) UIButton *revertButton;
@property (retain, nonatomic) UIButton *cropButton;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (copy, nonatomic) id /* block */ onTappedRevertBlock;
@property (copy, nonatomic) id /* block */ onTappedCropBlock;
@property (copy, nonatomic) id /* block */ onSlideProgressBlock;
@property (weak, nonatomic) id<MMMusicMVEditorCardCellDelegate> cellViewDelegate;
@property (retain, nonatomic) MMMusicLiveLyricDisplayView *lyricView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)videoViewHeightWithCellHeight:(double)a0;
+ (double)videoViewCenterYOffset:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setCellModel:(id)a0 initialVideoTime:(double)a1;
- (void)updateSubviewsExceptVideo;
- (void)setAccessoriesAlpha:(double)a0;
- (void)setSelected:(BOOL)a0;
- (BOOL)hasVideoSelected;
- (void)updateMusicPlayOffset:(float)a0;
- (void)cardSlider:(id)a0 didFinishPanningTimeTo:(float)a1;
- (void)handleTappedRevert:(id)a0;
- (void)handleTappedCrop:(id)a0;
- (BOOL)episodeItemCellViewIsInUse:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end

@class AWEPublishNewSlidesPreviewMaskView, UIImageView, UIVisualEffectView, UILabel, UIView;

@interface AWEPublishImageAlbumLargePreviewCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *photoFrame;
@property (retain, nonatomic) UILabel *coverTagLbl;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic) BOOL showChooseCover;
@property (retain, nonatomic) UIView *chooseCoverView;
@property (retain, nonatomic) UIVisualEffectView *chooseCoverBlurView;
@property (retain, nonatomic) UILabel *chooseCoverTextLbl;
@property (nonatomic) BOOL coverBindFirstImage;
@property (nonatomic) BOOL cancelShowChooseCoverAnimation;
@property (retain, nonatomic) AWEPublishNewSlidesPreviewMaskView *coverMaskView;
@property (nonatomic) BOOL isShowMask;
@property (copy, nonatomic) id /* block */ chooseCoverBlock;
@property (copy, nonatomic) id /* block */ clickPreviewBlock;
@property (nonatomic) BOOL forceUseSampleRation;
@property (nonatomic) struct CGSize { double width; double height; } targetCoverSize;
@property (nonatomic) BOOL enablePlaceholder;

+ (double)photoFrameHeightRatio;
+ (id)cellID;

- (void)clickAction:(id)a0;
- (void)showChooseCoverWithAnimated:(BOOL)a0;
- (void)configWithImage:(id)a0 index:(unsigned long long)a1 isCover:(BOOL)a2 showChooseCover:(BOOL)a3;
- (void)hiddenChooseCoverWithAnimated:(BOOL)a0;
- (id)chooseCoverText;
- (void)chooseCoverAction;
- (void)addCoverMaskView;
- (void)removeCoverMaskView;
- (void)updateImageAndLayoutWithImage:(id)a0;
- (void)adjustLayoutWithImage:(id)a0;
- (void)updateCoverText:(id)a0;
- (void)updateMaskViewShowStatus:(BOOL)a0;
- (void)configWithImage:(id)a0 showChooseCover:(BOOL)a1;
- (void)configWithImage:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldShowPlaceholder;

@end

@class UIView, PAGFile, MMLiveMonumentalStatisticsItem, UIImage, MMLiveGradientLayerView, MMLiveColorfulLabel, UIImageView, PAGView, NSString, WCFinderHeadImageView, UILabel;

@interface MMLiveStatisticsTrophyPosterView : UIView <MMLivePosterViewProviding>

@property (retain, nonatomic) MMLiveMonumentalStatisticsItem *statisticsItem;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundContainerView;
@property (retain, nonatomic) MMLiveGradientLayerView *borderView;
@property (retain, nonatomic) MMLiveGradientLayerView *backgroundView;
@property (retain, nonatomic) UIView *trophyContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveGradientLayerView *anchorAvatarBorderView;
@property (retain, nonatomic) WCFinderHeadImageView *anchorAvatarView;
@property (retain, nonatomic) MMLiveColorfulLabel *anchorDisplayNameLabel;
@property (retain, nonatomic) MMLiveColorfulLabel *dateLabel;
@property (retain, nonatomic) UIView *subjectLabelContainerView;
@property (retain, nonatomic) MMLiveColorfulLabel *subjectLabel;
@property (retain, nonatomic) UILabel *subjectShadowLabel;
@property (retain, nonatomic) UILabel *congratulatoryMessageLabel;
@property (retain, nonatomic) UIImageView *brandLogoView;
@property (retain, nonatomic) UILabel *brandLabel;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UILabel *qrCodeHintLabel;
@property (retain, nonatomic) PAGView *trophyPagView;
@property (retain, nonatomic) PAGFile *trophyPagFile;
@property (retain, nonatomic) UIImage *trophyPagLastFrameImage;
@property (nonatomic) BOOL posterFocused;
@property (readonly, nonatomic) UIImage *snapshotImage;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)borderGradientColorsForMonumentTier:(unsigned long long)a0;
+ (id)backgroundGradientColors;
+ (id)anchorAvatarBorderGradientColorsForMonumentTier:(unsigned long long)a0;
+ (id)anchorDisplayNameGradientColorsForMonumentTier:(unsigned long long)a0;
+ (id)dateGradientColorsForMonumentTier:(unsigned long long)a0;
+ (id)subjectGradientColorsForMonumentTier:(unsigned long long)a0;
+ (id)bottomMiscellaneousTextColorForMonumentTier:(unsigned long long)a0;
+ (id)qrCodeColorForMonumentTier:(unsigned long long)a0;

- (id)initWithMonumentalStatisticsItem:(id)a0 qrContent:(id)a1 anchorFinderContact:(id)a2 resourceFetcher:(id)a3;
- (void)posterViewFocusStatusChanged:(BOOL)a0;
- (void)layoutSubviews;
- (void)initializeComponentsWithQrContent:(id)a0 anchorContact:(id)a1;
- (void)loadTrophyPagWithResourceFetcher:(id)a0;
- (id)imageForLastFrameOfPagFile:(id)a0 trophyLabel:(id)a1;
- (void).cxx_destruct;

@end

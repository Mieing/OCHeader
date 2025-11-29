@class UIColor, NSArray, NSNumber, AWEStudioEditTextStickerFeatureConfig;

@interface AWEStudioEditStickerFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (nonatomic) BOOL infoStickerEnabled;
@property (nonatomic) BOOL AIMattingStickerEnabled;
@property (nonatomic) BOOL pollStickerEnabled;
@property (nonatomic) BOOL POIStickerEnabled;
@property (nonatomic) BOOL lyricStickerEnabled;
@property (nonatomic) BOOL socialStickerEnabled;
@property (nonatomic) BOOL canvasStickerEnabled;
@property (nonatomic) BOOL liveStickerEnabled;
@property (nonatomic) BOOL shareLiveToStoryStickerEnabled;
@property (nonatomic) BOOL searchStickerEnabled;
@property (nonatomic) BOOL grootStickerEnabled;
@property (nonatomic) BOOL fansInteractionStickerEnabled;
@property (retain, nonatomic) AWEStudioEditTextStickerFeatureConfig *textStickerFeatureConfig;
@property (nonatomic) BOOL disablePreviewView;
@property (nonatomic) BOOL forceEnableTapEnterTextPanel;
@property (copy, nonatomic) NSNumber *disableAnimatedStickerInPanelForPhotoType;
@property (copy, nonatomic) NSArray *filterStickerTags;
@property (nonatomic) double deleteViewWidth;
@property (nonatomic) double deleteViewHeigth;
@property (retain, nonatomic) UIColor *deleteViewNormalColor;
@property (retain, nonatomic) UIColor *deleteViewHighlightColor;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end

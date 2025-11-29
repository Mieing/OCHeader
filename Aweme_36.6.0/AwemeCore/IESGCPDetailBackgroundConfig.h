@class NSString, UIColor, IESGCPDetailBackgroundImageConfig;

@interface IESGCPDetailBackgroundConfig : NSObject

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL onlyUseFullScreenConfig;
@property (nonatomic) BOOL isV4StructureConfig;
@property (nonatomic) BOOL useNewHeaderTransactionAnimation;
@property (nonatomic) BOOL isNewHeaderSection;
@property (nonatomic) double titleBlurredViewHeight;
@property (retain, nonatomic) NSString *gameIconURL;
@property (retain, nonatomic) UIColor *indicatorViewColor;
@property (nonatomic) long long transactionMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *halfScreenBackgroundColor;
@property (nonatomic) BOOL isLightBgColorStyle;
@property (nonatomic) double backgroundCornerRadius;
@property (nonatomic) BOOL isImageInBlendMode;
@property (retain, nonatomic) IESGCPDetailBackgroundImageConfig *miniImageConfig;
@property (retain, nonatomic) IESGCPDetailBackgroundImageConfig *floatImageConfig;
@property (nonatomic) double backgroundDefaultHeight;
@property (nonatomic) double backgroundMaxHeight;
@property (nonatomic) double detailViewDefaultHeight;
@property (nonatomic) double detailViewMaxHeight;
@property (nonatomic) double segmentSlideViewFullScreenSpacing;
@property (nonatomic) double segmentSlideViewHalfScreenSpacing;
@property (nonatomic) int topPicSource;

+ (id)generateFromDetailViewConfig:(id)a0 andThemeConfig:(id)a1;
+ (id)getHSBGradientColorsFrom:(id)a0;
+ (id)headerMiniBrandImageName;
+ (id)headerFloatBrandImageName;
+ (id)headerBlueWhiteGradientImageName;

- (void).cxx_destruct;

@end

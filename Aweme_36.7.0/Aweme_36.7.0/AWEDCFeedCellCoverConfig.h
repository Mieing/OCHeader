@class NSArray, NSString, AWEDCFeedCellElementViewLayoutInfo;

@interface AWEDCFeedCellCoverConfig : AWEDCFeedBaseConfig

@property (nonatomic) long long imageRatioCutType;
@property (nonatomic) double imageMaxRatio;
@property (nonatomic) double imageMinRatio;
@property (copy, nonatomic) NSArray *imageRatios;
@property (copy, nonatomic) id /* block */ imageDisplayRatioBlock;
@property (copy, nonatomic) NSString *imageBizTag;
@property (copy, nonatomic) id /* block */ customCoverImageBlock;
@property (copy, nonatomic) id /* block */ customCoverImageURLBlock;
@property (copy, nonatomic) id /* block */ customImageCacheKeyBlock;
@property (copy, nonatomic) id /* block */ customCoverImageOptionsBlock;
@property (copy, nonatomic) id /* block */ customPlaceholderImageBlock;
@property (copy, nonatomic) id /* block */ customCoverImageViewBackgroundColor;
@property (retain, nonatomic) AWEDCFeedCellElementViewLayoutInfo *imageGenreResourceViewLayoutInfo;
@property (nonatomic) long long imageGenreResourceViewPosition;
@property (copy, nonatomic) NSArray *imageGenreResourceBanList;
@property (nonatomic) BOOL showResourceIconWhenPlaying;
@property (copy, nonatomic) id /* block */ imageElementMaskConfigBuilder;
@property (copy, nonatomic) id /* block */ imageElementMaskResourceBuilder;
@property (copy, nonatomic) id /* block */ imageElementConfigBuilder;
@property (copy, nonatomic) id /* block */ imageElementResourceBuilder;
@property (nonatomic) long long resourceReuseCount;
@property (nonatomic) long long coverHideType;
@property (copy, nonatomic) id /* block */ videoPlayViewPreInitializationBlock;
@property (copy, nonatomic) id /* block */ videoPlayViewConfigBlock;

- (void)setupDefaultConfig;
- (id)identifierAndPropertyName;
- (void).cxx_destruct;

@end

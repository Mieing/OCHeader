@class AWEURLModel, AWEAdSearchQualityOptimization, AWEAdSearchLandingPageSheet, AWETagLabelModel, AWESearchAdAlbumAdaptive, NSDictionary, AWEAdSearchComponentDisplayControl, AWEAdLabelPositionModel, AWEAdAlbumShowcaseStyle, NSString, AWEAdSearchPlayletLabelModel, AWEAdSearchImageResolution, NSArray, AWEAdSearchVideoParams;

@interface AWEAdSearchData : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showLynxBottomViewMask;
@property (retain, nonatomic) AWEURLModel *similarRecommendationTopIconLight;
@property (retain, nonatomic) AWEURLModel *similarRecommendationTopIconDark;
@property (retain, nonatomic) AWETagLabelModel *similarRecommendationTopTagModel;
@property (retain, nonatomic) AWETagLabelModel *similarRecommendationVideoTagModel;
@property (copy, nonatomic) NSString *doubleColumnButtonText;
@property (nonatomic) BOOL enableRevealButton;
@property (nonatomic) long long descriptionMaxNumberOfRows;
@property (nonatomic) long long commentMaxLine;
@property (retain, nonatomic) NSArray *kvAbstract;
@property (retain, nonatomic) AWEAdSearchQualityOptimization *qualityOptimization;
@property (nonatomic) long long disableSearchInnerRerank;
@property (retain, nonatomic) NSDictionary *adSuggestWordModelData;
@property (copy, nonatomic) NSArray *adQpons;
@property (copy, nonatomic) NSArray *insertKeys;
@property (retain, nonatomic) AWESearchAdAlbumAdaptive *albumAdaptive;
@property (nonatomic) long long commentRow;
@property (retain, nonatomic) AWEAdLabelPositionModel *adLabelPositionModel;
@property (nonatomic) BOOL isWeakStyle;
@property (retain, nonatomic) AWEAdSearchComponentDisplayControl *componentDisplayControl;
@property (retain, nonatomic) AWEAdSearchPlayletLabelModel *searchAdLabelInfo;
@property (retain, nonatomic) AWEAdSearchImageResolution *imageResolution;
@property (retain, nonatomic) AWEAdAlbumShowcaseStyle *albumShowcaseStyle;
@property (retain, nonatomic) AWEAdSearchLandingPageSheet *landingPageSheet;
@property (nonatomic) BOOL searchParamsPassThrough;
@property (retain, nonatomic) AWEAdSearchVideoParams *searchVideoParams;
@property (nonatomic) BOOL cacheImAweme;
@property (nonatomic) long long albumBestImageIndex;
@property (copy, nonatomic) NSString *videoModule;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (nonatomic) BOOL enableNewApplyQcpx;
@property (copy, nonatomic) NSString *liveApplyQcpxParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adQponsJSONTransformer;
+ (id)searchAdLabelInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end

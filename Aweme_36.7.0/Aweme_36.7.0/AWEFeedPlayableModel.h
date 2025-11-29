@class AWEFeedPlayableMaskModel, NSString, AWEFeedPlayableComplianceInfoModel, NSArray, AWEFeedPlayableSkipButtonModel, AWEFeedPlayableLoadingMaskModel, AWEFeedPlayableTransformBarModel, NSDictionary, AWEFeedPlayableLightTaskModel;

@interface AWEFeedPlayableModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *feedPlayableURL;
@property (nonatomic) long long playablePrerenderGap;
@property (nonatomic) BOOL isFeedPlayablePrerender;
@property (nonatomic) BOOL shouldSkipLoadingVideo;
@property (retain, nonatomic) AWEFeedPlayableLoadingMaskModel *loadingMaskInfo;
@property (retain, nonatomic) AWEFeedPlayableComplianceInfoModel *complianceInfo;
@property (retain, nonatomic) AWEFeedPlayableTransformBarModel *transformBar;
@property (retain, nonatomic) AWEFeedPlayableMaskModel *mask;
@property (retain, nonatomic) AWEFeedPlayableLightTaskModel *lightTask;
@property (retain, nonatomic) AWEFeedPlayableSkipButtonModel *skipBtn;
@property (copy, nonatomic) NSArray *alphaVideoList;
@property (copy, nonatomic) NSString *previewText;
@property (nonatomic) long long videoLength;
@property (copy, nonatomic) NSDictionary *videoModelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alphaVideoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

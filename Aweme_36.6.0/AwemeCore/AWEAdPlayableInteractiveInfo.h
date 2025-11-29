@class AWEFeedPlayableMaskModel, NSString, NSArray, AWEFeedPlayableComplianceInfoModel, AWEFeedPlayableSkipButtonModel, AWEFeedPlayableLoadingMaskModel, AWEFeedPlayableTransformBarModel, NSDictionary, AWEAdInteractiveVideoModel;

@interface AWEAdPlayableInteractiveInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *playableSceneUrl;
@property (retain, nonatomic) AWEAdInteractiveVideoModel *originalVideoInfo;
@property (copy, nonatomic) NSArray *videoList;
@property (retain, nonatomic) AWEFeedPlayableLoadingMaskModel *loadingMaskInfo;
@property (retain, nonatomic) AWEFeedPlayableComplianceInfoModel *complianceInfo;
@property (retain, nonatomic) AWEFeedPlayableTransformBarModel *transformBar;
@property (retain, nonatomic) AWEFeedPlayableMaskModel *mask;
@property (retain, nonatomic) AWEFeedPlayableSkipButtonModel *skipBtn;
@property (copy, nonatomic) NSDictionary *itemVideoMappings;
@property (copy, nonatomic) NSArray *alphaVideoList;
@property (nonatomic) long long videoLength;
@property (retain, nonatomic) AWEAdInteractiveVideoModel *currentVideoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoListJSONTransformer;
+ (id)interactiveVideosJSONTransformer;
+ (id)alphaVideoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

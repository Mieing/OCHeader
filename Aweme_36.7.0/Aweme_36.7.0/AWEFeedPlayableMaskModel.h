@class NSString, NSArray, AWEFeedPlayableRatingModel, AWEFeedPlayableRewardInfoModel, AWEFeedPlayableIconModel, AWEFeedPlayableMaskPictureInfoModel, AWEFeedPlayableTransformInfoModel, AWEFeedPlayableMaskBgInfoModel;

@interface AWEFeedPlayableMaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *tagList;
@property (copy, nonatomic) NSArray *appInfoList;
@property (retain, nonatomic) AWEFeedPlayableMaskPictureInfoModel *pictureInfo;
@property (retain, nonatomic) AWEFeedPlayableRatingModel *rating;
@property (retain, nonatomic) AWEFeedPlayableRewardInfoModel *rewardInfo;
@property (retain, nonatomic) AWEFeedPlayableTransformInfoModel *transformInfo;
@property (retain, nonatomic) AWEFeedPlayableMaskBgInfoModel *bgInfo;
@property (retain, nonatomic) AWEFeedPlayableIconModel *icon;
@property (retain, nonatomic) AWEFeedPlayableIconModel *recommendImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagListJSONTransformer;
+ (id)appInfoListJSONTransformer;
+ (id)rewardInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showAppInfoView;
- (void).cxx_destruct;

@end

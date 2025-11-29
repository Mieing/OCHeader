@class AWEStoryThirdPlatformInfoModel, NSString, NSArray, AWEUserModel, AWEURLModel, AWEVideoModel, AWEImageInfo, NSNumber;

@interface AWEOneDayLifeStoryModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *storyID;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AWEVideoModel *video;
@property (retain, nonatomic) NSNumber *duration;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSString *authorUserId;
@property (copy, nonatomic) NSString *stickers;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) AWEURLModel *labelThumb;
@property (retain, nonatomic) AWEURLModel *labelLarge;
@property (retain, nonatomic) AWEImageInfo *imageInfo;
@property (retain, nonatomic) AWEStoryThirdPlatformInfoModel *thirdPlatformInfo;
@property (retain, nonatomic) NSArray *interactionStickers;

+ (id)videoJSONTransformer;
+ (id)interactionStickersJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)awemeTypeJSONTransformer;
+ (id)thirdPlatformInfoJSONTransformer;
+ (id)labelThumbJSONTransformer;
+ (id)labelLargeJSONTransformer;
+ (id)imageInfoJSONTransformer;
+ (id)authorUserIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

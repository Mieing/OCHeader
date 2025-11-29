@class NSString, UIImage, NSNumber, AWEURLModel;

@interface AWEQuickStoryRecommendStickerModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *stickerName;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isMomentType;
@property (nonatomic) BOOL isStory24;

+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, AWEURLModel;

@interface AWEMusicPromotionTagInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEURLModel *lightModeImageUrl;
@property (retain, nonatomic) AWEURLModel *darkModeImageUrl;
@property (nonatomic) double imageRatio;
@property (copy, nonatomic) NSString *metaSongID;
@property (copy, nonatomic) NSString *activityID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

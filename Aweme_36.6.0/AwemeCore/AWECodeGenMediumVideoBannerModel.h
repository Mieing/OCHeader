@class NSString, AWECodeGenBannerCardCoverModel;

@interface AWECodeGenMediumVideoBannerModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *confId;
@property (copy, nonatomic) NSString *spotKey;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *stuffDetail;
@property (copy, nonatomic) NSString *confSource;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *landingSchema;
@property (nonatomic) int showActivityTags;
@property (nonatomic) int showStrategy;
@property (retain, nonatomic) AWECodeGenBannerCardCoverModel *coverModel;
@property (retain, nonatomic) AWECodeGenBannerCardCoverModel *horizontalCoverModel;
@property (retain, nonatomic) AWECodeGenBannerCardCoverModel *verticalCoverModel;
@property (nonatomic) long long relativeOrder;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

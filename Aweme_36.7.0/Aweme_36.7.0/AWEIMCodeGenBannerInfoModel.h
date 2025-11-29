@class NSString, NSDictionary;

@interface AWEIMCodeGenBannerInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *trackingExt;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

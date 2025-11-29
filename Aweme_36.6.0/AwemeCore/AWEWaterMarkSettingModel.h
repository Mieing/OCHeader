@class NSString, AWEURLModel;

@interface AWEWaterMarkSettingModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *resourceURL;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) unsigned long long fps;
@property (copy, nonatomic) NSString *endWatermarkTitle;
@property (copy, nonatomic) NSString *endWatermarkSubTitle;

+ (id)resourceURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

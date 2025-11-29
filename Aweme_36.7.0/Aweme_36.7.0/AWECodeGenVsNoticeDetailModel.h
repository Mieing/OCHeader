@class NSString;

@interface AWECodeGenVsNoticeDetailModel : AWEBaseDataModel

@property (nonatomic) int vs;
@property (nonatomic) long long episodeId;
@property (copy, nonatomic) NSString *vsSchemaUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class AWECodeGenAwemeModel, NSString;

@interface AWECodeGenV1SeriesAdGetResponse : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenAwemeModel *adAwemeModel;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

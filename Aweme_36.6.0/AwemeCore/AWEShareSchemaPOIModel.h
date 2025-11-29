@class NSString, NSDictionary, AWEURLModel;

@interface AWEShareSchemaPOIModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSDictionary;

@interface AWEIMCodeGenGroupSquareSearchModuleInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *placeHolder;
@property (copy, nonatomic) NSString *defaultQuery;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *trackingExt;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

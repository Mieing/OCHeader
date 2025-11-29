@class NSString;

@interface AWEIESMediaCodeGenPlaceModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *adminArea;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *subLocality;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

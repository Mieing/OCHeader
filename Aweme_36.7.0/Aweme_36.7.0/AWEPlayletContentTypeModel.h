@class NSNumber, NSString;

@interface AWEPlayletContentTypeModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *contentType;
@property (copy, nonatomic) NSString *typeName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSArray;

@interface AWEShareSchemaSpecialConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *coverURLs;
@property (nonatomic) long long roomType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

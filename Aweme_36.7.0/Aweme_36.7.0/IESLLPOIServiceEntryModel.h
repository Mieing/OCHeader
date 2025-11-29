@class NSString;

@interface IESLLPOIServiceEntryModel : IESLLifeBaseApiModel

@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long platformSource;
@property (copy, nonatomic) NSString *platformName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

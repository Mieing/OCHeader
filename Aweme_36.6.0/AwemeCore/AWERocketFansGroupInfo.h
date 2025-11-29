@class NSString;

@interface AWERocketFansGroupInfo : AWEBaseApiModel

@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *downloadURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

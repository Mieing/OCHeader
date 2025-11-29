@class NSString, NSDictionary;

@interface AWESSUCEventModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) NSString *clickName;
@property (copy, nonatomic) NSDictionary *logpb;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

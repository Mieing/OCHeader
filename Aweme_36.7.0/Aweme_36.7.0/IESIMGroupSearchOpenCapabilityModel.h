@class NSString, NSNumber;

@interface IESIMGroupSearchOpenCapabilityModel : IESIMGroupOpenCapabilityModel

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) NSNumber *autoSearch;

+ (id)optionalPropertyNameSet;

- (void).cxx_destruct;

@end

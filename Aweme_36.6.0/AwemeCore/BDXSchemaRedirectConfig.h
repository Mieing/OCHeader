@class NSString, NSDictionary;

@interface BDXSchemaRedirectConfig : NSObject

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *rules;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end

@class NSString, NSDictionary;

@interface PIAMessageTypeInvocation : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) long long ID;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)initWithJSONString:(id)a0;
- (id)JSONString;
- (id)initWithDictionary:(id)a0;
- (id)JSONDictionary;

@end

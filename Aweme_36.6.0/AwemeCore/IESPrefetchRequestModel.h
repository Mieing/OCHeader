@class NSString, NSDictionary;

@interface IESPrefetchRequestModel : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *occasion;
@property (nonatomic) long long expires;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

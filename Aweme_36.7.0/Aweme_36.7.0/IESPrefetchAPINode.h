@class NSString, NSDictionary;

@interface IESPrefetchAPINode : NSObject

@property (copy, nonatomic) NSString *apiName;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) long long expire;
@property (retain, nonatomic) NSDictionary *extras;

- (void).cxx_destruct;
- (id)jsonRepresentation;

@end

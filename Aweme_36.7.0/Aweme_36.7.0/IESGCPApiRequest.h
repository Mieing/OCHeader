@class NSString, NSDictionary;

@interface IESGCPApiRequest : NSObject

@property (retain, nonatomic) NSString *baseURL;
@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *tintTags;
@property (retain, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (nonatomic) BOOL useJSONSerializer;
@property (nonatomic) unsigned long long responseFormat;
@property (copy, nonatomic) id /* block */ responseCallback;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) id /* block */ chunkCompleteCallback;
@property (retain, nonatomic) Class modelClass;
@property (copy, nonatomic) id /* block */ callback;

- (id)urlString;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, NSDictionary;

@interface HTSLiveApiRequest : NSObject <HTSLiveApiRequestProtocol>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *baseURL;
@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *tintTags;
@property (retain, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (nonatomic) BOOL useJSONSerializer;
@property (nonatomic) BOOL forceJSONRequest;
@property (nonatomic) unsigned long long responseFormat;
@property (copy, nonatomic) id /* block */ responseCallback;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) id /* block */ chunkCompleteCallback;
@property (retain, nonatomic) Class modelClass;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL callbackInBackgroundThread;

+ (id)apiRequestByPath:(id)a0 param:(id)a1 callback:(id /* block */)a2;

- (id)urlString;
- (void).cxx_destruct;
- (id)init;

@end

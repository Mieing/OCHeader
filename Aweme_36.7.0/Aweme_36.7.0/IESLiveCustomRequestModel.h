@class NSMutableDictionary, NSString, NSDictionary, NSURL, NSData, NSError, NSNumber;

@interface IESLiveCustomRequestModel : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *commonPath;
@property (retain, nonatomic) NSDictionary *requestHeaders;
@property (retain, nonatomic) NSDictionary *parameters;
@property (nonatomic) long long method;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (retain, nonatomic) NSData *bodyField;
@property (nonatomic) double timeout;
@property (nonatomic) long long httpCode;
@property (retain, nonatomic) id jsonObj;
@property (retain, nonatomic) id binaryData;
@property (retain, nonatomic) NSDictionary *responseHeaders;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSString *logid;
@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSDictionary *extra;
@property (readonly, nonatomic) NSNumber *serverTime;
@property (readonly, nonatomic) id data;
@property (nonatomic) double requestTimeInterval;
@property (retain, nonatomic) NSMutableDictionary *byteLinkAgentConfig;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL callbackInBackgroundThread;
@property (retain, nonatomic) id chunkResponseData;
@property (nonatomic) BOOL chunkModel;
@property (copy, nonatomic) id /* block */ chunkCompleteCallback;
@property (nonatomic) BOOL requestForJSON;
@property (nonatomic) BOOL requestTypePB;
@property (nonatomic) BOOL requestForBinary;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL needCertify;

- (id)decodeDataWithModelClass:(Class)a0 error:(id *)a1;
- (id)configDomain;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, NSData;

@interface SAMICore_HttpCommonContextCreateParameter : NSObject

@property (retain, nonatomic) NSString *url;
@property (nonatomic) int connectTimeoutMs;
@property (retain, nonatomic) NSString *appKey;
@property (nonatomic) long long tokenType;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) long long mixedTokenTimestamp;
@property (retain, nonatomic) NSString *apiNamespace;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *customBodyItem;
@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long requestPayloadType;
@property (nonatomic) long long responsePayloadType;
@property (retain, nonatomic) id requestPayload;

- (void)dealloc;

@end

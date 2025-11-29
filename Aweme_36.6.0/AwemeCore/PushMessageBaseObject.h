@class NSData, NSString, NSDictionary;

@interface PushMessageBaseObject : NSObject

@property (nonatomic) unsigned long long sequenceId;
@property (nonatomic) unsigned long long logId;
@property (nonatomic) int method;
@property (nonatomic) int service;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadEncoding;
@property (copy, nonatomic) NSDictionary *headers;

+ (id)ieslive_messageWithUpstream;
+ (id)ieslive_messageWithDefault;

- (BOOL)ieslive_isDownstreamMessage;
- (void).cxx_destruct;

@end

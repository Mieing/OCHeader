@class NSString, NSMutableDictionary, NSDictionary, NSData;

@interface RTVJetWebSocketRequest : NSObject

@property (retain, nonatomic) NSMutableDictionary *allHeaderFields;
@property (nonatomic, getter=isRetrying, setter=setRetrying:) BOOL retrying;
@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSData *messageObject;
@property (copy, nonatomic) NSString *payloadEncoding;
@property (nonatomic) long long service;
@property (nonatomic) long long method;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) double backoffDuration;
@property (nonatomic) double timeout;

- (id)initWithRequestID:(id)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forHeaderField:(id)a1;

@end
